# MaakBib

Dit is de code voor de [MaakBib Website](https://maakbib.be).

## Lokaal hosten

Site testen? Je kan ze lokaal gebruiken na installatie jekyll en de gems. 

In linux, zet de site lokaal op via

    $ bundle exec jekyll serve
    
De site wordt beschikbaar op http://127.0.0.1:4000/

Op Chrome OS, start de Terminal (Linux) en breek uit de virtuele omgeving met

    $ bundle exec jekyll serve --host `hostname -I` --port 4000
    
Ga dan in Chrome naar het adres van de virtuele omgeving: http://penguin.linux.test:4000/

## Jekyll en gems installeren

De eerste keer? Dan moet je nog alles installeren. In linux Ubuntu:

    sudo apt-get install ruby-full build-essential zlib1g-dev
    
Zet daarna onder je user alle variabelen goed. 

    echo '# Install Ruby Gems to ~/gems' >> ~/.bashrc
    echo 'export GEM_HOME="$HOME/gems"' >> ~/.bashrc
    echo 'export PATH="$HOME/gems/bin:$PATH"' >> ~/.bashrc
    source ~/.bashrc

Herstart, of doe de laatste lijn op elke terminal sessie om deze variabelen te definieren.

Installeer daarna bundler via gem:

    $ gem install jekyll bundler

Installeer daarna in de directory van MaakBib de gems die de site gebruikt:

    $ bundle install

## Updaten
### Update van gebruikte css ? 

De site gebruikt [Bootstrap](https://getbootstrap.com/). Indien recentere of andere versies gebruikt worden, de beveiligingshash
kan berekend worden op [srihash](https://www.srihash.org/)

### Update van gems ?

Doe voor volledige update

    $ bundle update

Nieuwe jekyll versie? Doe 

    $ gem update jekyll

Enkel een gem updaten, bv github-pages? doe 

    $ bundle update github-pages

Extra info: https://help.github.com/en/articles/testing-your-github-pages-site-locally-with-jekyll 

## Installatie op webserver

We gebruiken hiervoor lftp. 

Ga naar de directory van deze code

    $ cd MaakBib

Stop de lokale webserver `serve` via CTRL+C. Bouw nu een correcte site voor een remote webserver:

    $ bundle exec jekyll build

Gebruik lftp om deze op te laden:

    $ lftp 

in lftp, doe commando's, met USERNAME je username, en FTPSERVER de server:

    set ftp:ssl-allow no;
    open ftp://USERNAME@ftp.FTPSERVER; 

je moet nu je login en paswoord geven in lftp. Daarna

    lcd ./_site;
    cd /www/maakbib.be/_site;
    mirror --reverse --delete --use-cache --verbose --allow-chown --allow-suid --no-umask --parallel=2 --exclude-glob .svn

Dit is het, je site is beschikbaar. Om lftp te stoppen

    exit
