---
layout: post
title:  "Een activiteit toevoegen op MaakBib"
author: ben
categories: [ tutorial, medium ]
image: assets/images/code_fragment.jpg
---
Je hebt een leuke activiteit ontwikkeld die ideaal is om toe te voegen op [MaakBib](http://maakbib.be)? Wel, goed nieuws, dit kan. Je kan ons de activiteit opsturen als docx, of google doc. 

Zorg dat het copyright van alle foto's en alle teksten bij jezelf ligt, en geef ons (MaakBib/De Creatieve STEM) copyright recht op de foto's en de tekst. Het eenvoudigst is dat je een creative commons licentie geeft aan al je werk. 

# Zelf de site aanpassen

Je kan ook zelf de site aanpassen! Deze site is beschikbaar op [github.com](https://github.com). Maak een account daar, navigeer dan naar de [MaakBib code opslag](https://github.com/IngegnoMakerSpace/MaakBib). In de rechterhoek kies je voor <strong>Fork</strong>, welke een copie van de MaakBib site zal maken waarin je je activiteit kunt toevoegen.

Kies in de folder **\_posts** een bestaande activiteit met een layout zoals je jouw activiteit wil geven, en sla deze op met een naam die de datum en beschrijving bevat, bv _2020-01-06-activiteit-toevoegen-aan-maakbib.md_

Pas deze activiteit aan zodat de inhoud jouw activiteit is. Je gebruikt markdown om alles op te schrijven

## Markdown tekst schrijven

Er zijn veel krachtige dingen die u kunt doen met de Markdown. Als je redelijk vertrouwd bent geraakt met het schrijven in Markdown, kun je genieten van wat meer geavanceerde tips over de soorten dingen die je kunt doen met Markdown!


## Speciale opmaak

Naast vet en cursief kunt u ook een andere speciale opmaak in Markdown gebruiken wanneer dat nodig is, bijvoorbeeld:

+ \~\~doorhalen\~\~  wordt  ~~doorhalen~~
+ \*\*vet\*\* wordt **vet**
+ \*cursief\* wordt *cursief*
+ \*\*\_cursief vet\_\*\* wordt **_cursief vet_**
+ \\\*speciale karakters\\\* wordt \*speciale karakters\*

## Paragraaf, nieuwe lijn, bullets en indent

Je start een nieuwe paragraaf door een lege lijn te laten tussen blokken, bv
```md
paragraaf1 bla bla

paragraaf 2 bla bla

}
```
wordt:

paragraaf1 bla bla

paragraaf 2 bla bla

Wil je gewoon een nieuwe lijn, dan kan dat met het symbool \\ op het einde van de lijn, bv

```md
tekst in een paragraaf\
dit op nieuwe lijn
}
```
wordt:


tekst in een paragraaf\
dit op nieuwe lijn

Lijstjes maak je door nummers of sterretjes te plaatsen aan het begin van een lijn, terwijl je 4 spaties kunt gebruiken voor indents. Bevoorbeeld:


```md
tekst

* bullet1
* bullet2

1. lijst
2. lijst\
    nieuwe lijn in lijst met 4 spaties ervoor.
    1. sublijst
    2. sublijst
        * subbullet
3. lijst

    indent tekst

tekst
}
```
wordt:

tekst

* bullet1
* bullet2

1. lijst
2. lijst\
    nieuwe lijn in lijst met 4 spaties ervoor.
    1. sublijst
    2. sublijst
        * subbullet
3. lijst

    indent tekst

tekst

## Code Blokken

Er zijn twee soorten code-elementen die in Markdown kunnen worden ingevoegd, de eerste is inline en de andere is blok. Inline code wordt opgemaakt door elk woord of woorden in back-ticks (\`) te plaatsen, `zoals dit`. Grotere codefragmenten kunnen op meerdere regels worden weergegeven met behulp van drievoudige back-ticks (\`\`\`) aan het begin en einde:

```
.my-link {
    text-decoration: underline;
}
```

Bij toevoegen van codefragmenten kun je de taal meegeven en de layout zal getoond worden volgens de standaard van die taal. Bv 
HTML door `html` mee te geven na de back-ticks:

```html
<li class="ml-1 mr-1">
    <a target="_blank" href="#">
    <i class="fab fa-twitter"></i>
    </a>
</li>
```

Javascript door `js` mee te geven na de back-ticks:

```js
// alertbar later
$(document).scroll(function () {
    var y = $(this).scrollTop();
    if (y > 280) {
        $('.alertbar').fadeIn();
    } else {
        $('.alertbar').fadeOut();
    }
});
```

Python door `python` mee te geven na de back-ticks:

```python
print("Hello World")
```

Arduino code door `c` mee te geven na de back-ticks:


```c
printf("Hello World");
```

## Foto's

Foto's plaats je in de map `assets/images`. Maak een submap daar met de naam van je activiteit en voeg je foto toe. Probeer foto's zoveel mogelijk in formaat 750px x 500 px te gebruiken (foto formaat 6x4), dat komt best uit op de site!

Je kan daarna foto's invoegen vanuit die map, bv:

```md
![beschrijving foto voor blinden]({{ site.baseurl }}/assets/images/code_fragment.jpg)
```
heeft als resultaat:
![beschrijving foto voor blinden]({{ site.baseurl }}/assets/images/code_fragment.jpg)

## Secties

Nieuwe secties laat je beginnen met een sectietitel en het speciale symbool \#

```md
## Sectie hoofding

### Subsectie hoofding
```

## Links

Je activiteit zou op zichzelf moeten staan, maar mogelijks wil je links toevoegen naar extra materiaal, referenties, of lasercut bestanden. 

In markdown voeg je link toe op volgende manier: 

```md
[De Creatieve STEM site](http://decreatievestem.be)
```
heeft als resultaat:
[De Creatieve STEM site](http://decreatievestem.be)

Je kan ook een figuur gebruiken als link. 
```md
[![De Creatieve STEM site]({{ site.baseurl }}/assets/images/sponsors/CreatieveSTEMLogo.png)](http://decreatievestem.be)
```
heeft als resultaat:

[![De Creatieve STEM site]({{ site.baseurl }}/assets/images/sponsors/CreatieveSTEMLogo.png)](http://decreatievestem.be)

## Volledige HTML

Misschien is het beste deel van Markdown dat je nooit beperkt bent tot alleen Markdown. U kunt HTML rechtstreeks in de Markdown-editor schrijven en het werkt gewoon zoals HTML meestal doet. Geen grenzen! Hier is een standaard YouTube-insluitcode als voorbeeld:

<p><iframe style="width:100%;" height="315" src="https://www.youtube.com/embed/bv-oIUqpG-o?rel=0&amp;showinfo=0" frameborder="0" allowfullscreen></iframe></p>

## Activiteit publiceren

Is je activiteit af, dan doe je [een pull request aan ons](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/about-pull-requests) via github. 

Wij doen dan een review van je activiteit, discussieren met jou, en doen dan uiteindelijk een merge van je activiteit in de officiele site! 

Enkele extra zaken te voorzien:

* Voeg je naam toe aan de file `_config.yml` onder auteurs. Kies een leuke avatar ook.
* Stuur ons een verklaring op eer dat alle foto's, teksten en figuren je eigen origineel werk zijn.

Succes!