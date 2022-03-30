# 東成工業会

# Fonts
デザインで使用されているフォントが Web Fonts で対応が難しいため、下記の置換を行う

- Hiragino Mincho Std w3 => Noto Serif JP Light 300
- Hiragino Mincho Std w5 => Noto Serif JP Regular 400
- Hiragino Kaku Gothic Std w2 => Noto Sans JP Light 300
- Hiragino Kaku Gothic Std w3 => Noto Sans JP Light 300
- Hiragino Kaku Gothic Std w4 => Noto Sans JP Medium 500
- DIN Next LT Pro Medium => Roboto Medium 500

## Fonts CSS
```
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Noto+Sans+JP:wght@300;400&family=Noto+Serif+JP:wght@300;500&family=Roboto:wght@500;700&display=swap" rel="stylesheet">

font-family: 'Noto Sans JP', sans-serif; //font-weight: 300/400
font-family: 'Noto Serif JP', serif; //font-weight: 300/500
font-family: 'Roboto', sans-serif; //font-weight: 500
```

