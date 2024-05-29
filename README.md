
# Zascitno-vziganje-avtom.-motorja #

Projekt_UPN-p

Navodila: Ko obrnemo ključ v desno (simuliramo s tipko), se sklene kontakt A, ki aktivira zaganjalnik (motor). Pogoj za to pa je, da je vklopljeno skrivno stikalo B. Zaganjalnika tudi ni mogoče pognati, če motor že teče, kar zazna senzor M (uporabite še eno stikalo).

KOSOVNICA: <br />
<ul>
<li>Arduino Uno 1x </li>
<li>Upor 1kΩ 3x </li>
<li>Stikalo 2x </li>
<li>Tipka 1x </li>
</ul>


VHODI:
<table>
<tr>
    <th>Oznaka v načrtu</th>
    <th>Naslov operanda</th>
    <th>Vrsta kontakta</th>
    <th>Pomen</th>
  </tr>
   <tr>
    <td>S1</td>
    <td>Tipka</td>
    <td>NO</td>
     <td>Za vžig motorja</td>
  </tr>
  <tr>
    <td>S2</td>
    <td>Stikalo</td>
    <td>menjalno stikalo</td>
    <td>Skrivno stikalo</td>
  </tr>
  <tr>
    <td>S3</td>
    <td>Stikalo</td>
    <td>menjalno stikalo</td>
    <td>Simulira vžgan motor</td>
  </tr>

</table>


![image2](https://github.com/Batobatina/-Zascitno-vziganje-avtom.-motorja/assets/123446717/6e2c50c1-8735-407a-8088-fca3d35ee662)
<br>
<br>
<br>
![Posnetek zaslona 2024-05-29 075826](https://github.com/Batobatina/-Zascitno-vziganje-avtom.-motorja/assets/123446717/bd0cf835-bb9c-47df-b2f8-ee02477af69d)
<br>
<br>


https://github.com/Batobatina/-Zascitno-vziganje-avtom.-motorja/assets/123446717/0a9e422f-c054-44c8-9f67-5cafae42c025 


<br>
<br>
<br>
<br>
KOMENTAR:<br/>
Za Izhod sva uporabila serial print ki je vgrajen v Arduino aplikacijo.<br/>

Ker sva motor samo simulirala projekt ni bil realističen.Za izboljšavo projekta in bolj realistično izvedbo naloge bi dodala motor ali LED luči.<br/>
Za delovanje naloge kliknemo gumb ki naj bi zagnal "motor" to pa se naredi le če je vklopljen S2, ob enem pa motor nesme biti že vžgan(to simuliramo z S3).<br/>
<br/>
Na posnetku prikazujeva najprej kaj se zgodi če ni vklopljen ne S2 niti S3 in vidimo da se nič ne zgodi, nato vklopiva S2 in deluje. Za tem pa vklopiva S3 in spet ne deluje, ker zazna da je "motor" že vklopljen.




