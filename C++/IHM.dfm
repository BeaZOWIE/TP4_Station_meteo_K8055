object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 215
  ClientWidth = 459
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 167
    Width = 4
    Height = 16
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 189
    Width = 4
    Height = 16
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label: TLabel
    Left = 122
    Top = 4
    Width = 265
    Height = 14
    Caption = 'Cochez les deux cases et appuyez sur connexion'
  end
  object RadioGroup1: TRadioGroup
    Left = 190
    Top = 24
    Width = 97
    Height = 49
    Caption = 'Adresse'
    TabOrder = 0
  end
  object CheckBoxSK5: TCheckBox
    Left = 202
    Top = 44
    Width = 38
    Height = 17
    Caption = 'SK5'
    Checked = True
    State = cbChecked
    TabOrder = 1
  end
  object CheckBoxSK6: TCheckBox
    Left = 246
    Top = 44
    Width = 38
    Height = 17
    Caption = 'SK6'
    Checked = True
    State = cbChecked
    TabOrder = 2
  end
  object Button1: TButton
    Left = 191
    Top = 79
    Width = 96
    Height = 26
    Caption = 'Connexion'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 160
    Top = 111
    Width = 153
    Height = 81
    TabOrder = 4
    Visible = False
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 5000
    OnTimer = Timer1Timer
    Left = 616
  end
end
