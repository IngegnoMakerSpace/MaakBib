---
layout: tools
title:  "Materiaallijst"
authors: [cri]
featured: false
lowtech: false
midtech: false
hightech: true
categories: [ ]
image: assets/tools/faq.jpg
materialen: 
    - name: vertical tilt switch
      links: ["https://missioncontrollab.com/collections/technologist-and-teacher-supply/products/vertical-tilt-switch", ]
    - name: space tape
      links: ["https://missioncontrollab.com/collections/technologist-and-teacher-supply/products/space-tape" ]
    
---

Onze materialenlijst wordt regelmatig up to date gehouden


    <ul>
      {% for item in page.materialen %}
        <li>{{ item.name }}, links: {{ item.links }}</li>
      {% endfor %}
    </ul>
