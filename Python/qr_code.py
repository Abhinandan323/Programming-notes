# pip install PyQRCode
# pip install pypng
import pyqrcode
import png
link = "https://github.com/Fadhila36/"
qr_code = pyqrcode.create(link)
qr_code.png("github.png", scale=5)