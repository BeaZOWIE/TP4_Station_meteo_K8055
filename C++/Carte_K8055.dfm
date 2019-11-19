object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object connexion: TButton
    Left = 216
    Top = 119
    Width = 81
    Height = 35
    Caption = 'Connexion'
    TabOrder = 0
    OnClick = connexionClick
  end
  object Edit1: TEdit
    Left = 336
    Top = 126
    Width = 121
    Height = 21
    TabOrder = 1
    OnChange = Edit1Change
  end
end
