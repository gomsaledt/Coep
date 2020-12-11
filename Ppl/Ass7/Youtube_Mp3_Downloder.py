from __future__ import unicode_literals
import gtk
import youtube_dl
import os

class DownloaderWindow(gtk.Window):
    def __init__(self):
        super(DownloaderWindow, self).__init__()
        self.set_title("YOUTUBE MP3 DOWNLOADER")
        self.set_default_size(600, 400)

        # Label
        self.label = gtk.Label("Enter the link here...")

        # Textfield
        self.entry = gtk.Entry()

        # Button
        self.btn = gtk.Button("button_press_event", self.download)
        
        # Container
        screen = gtk.Fixed()
        screen.put(self.label, 200, 150)
        screen.put(self.entry, 250, 150)
        screen.put(self.entry, 300, 150)
        self.add(screen)
        
        self.show_all()

    def download(self, widget, event):
        try:
            url = self.entry.get_text()
            Downlaod(url)
            self.label1 = gtk.Label("Downloding....")
        except:
            self.label1 = gtk.Label("Error occured....")
        finally:
            screen.put(self.entry, 350, 150)


class Download:
    def __init__(self, url):
        self.url = url
        # self.save_path = os.path.join(os.path.expanduser("~"), "Downloads")
        self.save_path = "D:\Music\Youtube"
        self.song()

    def song(self):
        opts = {
                'verbose': True,
                'fixup': 'detect_or_warn',
                'format': 'bestaudio/best',
                'postprocessors': [{
                                    'key': 'FFmpegExtractAudio',
                                    'preferredcodec': 'mp3',
                                    'preferredquality': '1411'
                }],
                'extractaudio': True,
            'outtmpl': self.save_path + '/%(title)s.%(ext)s',
            'noplaylist': True
        }
        ydl = youtube_dl.YoutubeDL(opts)
        ydl.download([self.url])


DownloaderWindow()
gtk.main()
