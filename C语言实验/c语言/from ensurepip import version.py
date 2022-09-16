from ensurepip import version
from importlib.resources import path
import os
from unicodedata import name
import paddlehub as hub


seg=hub.Module(name='deeplabv3p_xception65_humanseg',version="1.0.0")


path='./images_input/'