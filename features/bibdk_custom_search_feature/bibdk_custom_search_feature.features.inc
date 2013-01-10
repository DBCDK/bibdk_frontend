<?php
/**
 * @file
 * bibdk_custom_search_feature.features.inc
 */

/**
 * Implements hook_default_bibdk_custom_search_page().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_page() {
  $export = array();

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $search_page->page_title = 'Musik';
  $search_page->page_path = 'bibdk_frontpage/musik';
  $search_page->menu_title = 'Musik';
  $search_page->delimiter = 'term.workType=music';
  $search_page->expand = TRUE;
  $search_page->sort = -4;
  $export['013870a2-3c08-21d4-65bf-0db021d11463'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $search_page->page_title = 'Alle materialer';
  $search_page->page_path = 'bibdk_frontpage';
  $search_page->menu_title = 'Alle materialer';
  $search_page->delimiter = '';
  $search_page->expand = TRUE;
  $search_page->sort = -10;
  $export['085dc6d0-ea45-4784-bdeb-d4b7e4ab9197'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $search_page->page_title = 'Spil';
  $search_page->page_path = 'bibdk_frontpage/spil';
  $search_page->menu_title = 'Spil';
  $search_page->delimiter = 'term.workType=game';
  $search_page->expand = FALSE;
  $search_page->sort = -5;
  $export['13d4c64a-99e0-1eb4-6963-fd34e37b9f4f'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $search_page->page_title = 'Bøger';
  $search_page->page_path = 'bibdk_frontpage/bog';
  $search_page->menu_title = 'Bøger';
  $search_page->delimiter = 'term.workType=literature';
  $search_page->expand = TRUE;
  $search_page->sort = -9;
  $export['b271b4be-7691-e8b4-5136-ec364d09cad6'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $search_page->page_title = 'Film';
  $search_page->page_path = 'bibdk_frontpage/film';
  $search_page->menu_title = 'Film';
  $search_page->delimiter = 'term.workType=movie';
  $search_page->expand = TRUE;
  $search_page->sort = -7;
  $export['b9772b3b-8582-7894-2d4a-ba0e11e02782'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $search_page->page_title = 'Artikler';
  $search_page->page_path = 'bibdk_frontpage/artikel';
  $search_page->menu_title = 'Artikler';
  $search_page->delimiter = 'term.workType=article';
  $search_page->expand = TRUE;
  $search_page->sort = -8;
  $export['ce97eeb6-5d38-6a24-c524-d96cc3193335'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $search_page->page_title = 'På nettet';
  $search_page->page_path = 'bibdk_frontpage/net';
  $search_page->menu_title = 'På nettet';
  $search_page->delimiter = 'term.workType=online';
  $search_page->expand = FALSE;
  $search_page->sort = -6;
  $export['defa0c2c-754f-1cb4-a11a-c37ae2a677f7'] = $search_page;

  return $export;
}

/**
 * Implements hook_default_bibdk_custom_search_element().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_element() {
  $export = array();

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '00ac2ddd-96c7-fbe4-018a-e6c0c34338e7';
  $element->element_title = 'materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx bøger';
  $element->help_text = 'Vælg en eller flere materialetyper
';
  $element->sort = -96;
  $element->tab_index = 0;
  $element->access_key = 'm';
  $export['00ac2ddd-96c7-fbe4-018a-e6c0c34338e7'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '056cd2a1-7657-76e4-d1cc-841eb2d17cbc';
  $element->element_title = 'bog_sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx tysk';
  $element->help_text = 'Vælg et eller flere sprog';
  $element->sort = -89;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['056cd2a1-7657-76e4-d1cc-841eb2d17cbc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '0a253843-1684-ee94-81dd-9ea005010668';
  $element->element_title = 'bog_form';
  $element->element_label = 'Litterær form';
  $element->description = 'fx faglitteratur';
  $element->help_text = 'Her kan du vælge om materialet skal være Fag- eller skønlitteratur. Ikke alle materiale er markeret om de er fag- eller skønlitteratur.';
  $element->sort = -87;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['0a253843-1684-ee94-81dd-9ea005010668'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '0db52b2d-26c8-96d4-f1cb-a74760332a34';
  $element->element_title = 'film_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: nordkorea';
  $element->help_text = 'Her kan du søge på ord et eller andet sted i posten. Fx titlen, medvirkende eller et kort handlingsreferat. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
tryllekunst*';
  $element->sort = -65;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['0db52b2d-26c8-96d4-f1cb-a74760332a34'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '100d19c8-6104-7dd4-edca-576ddee7c38d';
  $element->element_title = 'film_tilladt_for';
  $element->element_label = 'Tilladt for';
  $element->description = 'Tilladt for';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe en film er tilladt for.';
  $element->sort = -61;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['100d19c8-6104-7dd4-edca-576ddee7c38d'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '134049ec-6be0-3be4-5541-d97ff96377eb';
  $element->element_title = 'emne';
  $element->element_label = 'Emne';
  $element->description = 'fx tsnuami';
  $element->help_text = 'Søg emne:
Skriv dit emne eller starten på det ord du søger noget om - skriver du flere ord kombinerer systemet automatisk med - og - mellem ordene.
';
  $element->sort = -98;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['134049ec-6be0-3be4-5541-d97ff96377eb'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '161f5183-b254-7f44-a5df-10257190c9b2';
  $element->element_title = 'bog_målgruppe';
  $element->element_label = 'Målgruppe';
  $element->description = 'fx voksne';
  $element->help_text = 'Her kan du vælge om materialet skal være for alle eller for børn eller for voksne. Ikke alle materialer er markeret om de er beregnet for børn eller voksne.';
  $element->sort = -88;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['161f5183-b254-7f44-a5df-10257190c9b2'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '16211341-fade-5054-e9b8-534632e77fc6';
  $element->element_title = 'artikel_emne';
  $element->element_label = 'Artiklens emne';
  $element->description = 'fx fed* fisk*';
  $element->help_text = 'Skriv dit emne - slut evt. med *
Hvis du skriver flere ord, kombinerer systemet dem med og.
Ex. pisa*';
  $element->sort = -83;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['16211341-fade-5054-e9b8-534632e77fc6'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '1b055086-7684-f3e4-a5ad-9dc6e9967c23';
  $element->element_title = 'artikler_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: børn burkina';
  $element->help_text = 'Skriv et eller flere ord - slut dem evt. med ?
Der søges i navne, emner, titelord m.m.
Flere ord kombineres af systemet med &quot;og&quot;.

Ex: pisa? per';
  $element->sort = -82;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['1b055086-7684-f3e4-a5ad-9dc6e9967c23'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '30d729e7-7acd-3c74-f9fe-c54a0db53b00';
  $element->element_title = 'bog_titel';
  $element->element_label = 'Titel';
  $element->description = 'fx jordens søjler';
  $element->help_text = 'Søg titel:
Skriv et eller flere ord fra titlen - flere ord kombinerer systemet med et og.
Sæt evt. * til sidst som joker (trunkeringstegn), fx drageløber*.
Senere kan du evt. bruge Flere søgemuligheder.';
  $element->sort = -93;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['30d729e7-7acd-3c74-f9fe-c54a0db53b00'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '3480ebc2-df1c-34a4-2146-fd0819bef99f';
  $element->element_title = 'forfatter';
  $element->element_label = 'Forfatter';
  $element->description = 'fx nesbø';
  $element->help_text = 'Søg forfatter:
Skriv den eller de dele af navnet, du er sikker på. Kombiner evt. med et ord fra titlen - det skal skrives i titelboksen. ';
  $element->sort = -100;
  $element->tab_index = 0;
  $element->access_key = 'f';
  $export['3480ebc2-df1c-34a4-2146-fd0819bef99f'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '3f19f0dc-b0e7-2f34-c9d2-bbbcf83f1a7f';
  $element->element_title = 'musik_genre';
  $element->element_label = 'Musikgenre';
  $element->description = 'fx jazz';
  $element->help_text = 'Finder du ikke den type musik du leder efter vist som genre?
Søg i stedet i fritekst og klik dig frem blandt mulighederne under Flere søgemuligheder.';
  $element->sort = -55;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['3f19f0dc-b0e7-2f34-c9d2-bbbcf83f1a7f'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '42c99e78-f2c3-69a4-8d0a-0ab1f4e76e79';
  $element->element_title = 'musik_ophav1';
  $element->element_label = 'Medvirkende';
  $element->description = 'fx: netrebko';
  $element->help_text = 'Medvirkende: 
i begge felter kan du søge på musikere, sangere, grupper og komponister. De to felter betyder at du kan kombinere to sangere eller en kunstner og en komponist og finde hvor de optræder sammen.';
  $element->sort = -60;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['42c99e78-f2c3-69a4-8d0a-0ab1f4e76e79'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '45601074-408d-a524-a1f1-0b83592adb30';
  $element->element_title = 'net_forfatter';
  $element->element_label = 'Forfatter eller udgiver';
  $element->description = 'fx skat';
  $element->help_text = 'Skriv den eller de dele af navnet, du er sikker på. 
';
  $element->sort = -79;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['45601074-408d-a524-a1f1-0b83592adb30'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '4dee7338-429a-e9b4-2597-273c3ed2e3b0';
  $element->element_title = 'spil_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: tetris';
  $element->help_text = 'Her kan du søge på ord et eller andet sted i posten. Fx titlen, udgiver eller et kort handlingsreferat. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
synge*';
  $element->sort = -73;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['4dee7338-429a-e9b4-2597-273c3ed2e3b0'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '4f349cf2-e113-bf64-7592-979cfc2bc50e';
  $element->element_title = 'musik_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: ebb nitzer';
  $element->help_text = 'Her kan du søge på titler, kunstnere, komponister, emneord og noter. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
neanderthal*';
  $element->sort = -56;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['4f349cf2-e113-bf64-7592-979cfc2bc50e'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '508e56ff-b344-49c4-7dc9-d4a8e2975a12';
  $element->element_title = 'bog_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: thorsminde';
  $element->help_text = 'Her søger du i de fleste oplysninger i posterne
Du kan bruge en * - når du er i tvivl, fx sejl*
Du skal ikke skrive og mellem ordene.';
  $element->sort = -91;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['508e56ff-b344-49c4-7dc9-d4a8e2975a12'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '577a6e95-a4c4-1364-9d35-b520727a66e3';
  $element->element_title = 'musik_titler_alle';
  $element->element_label = 'Alle titler';
  $element->description = 'fx: stille før storm';
  $element->help_text = 'Alle titler kan bruges til ord fra alle slags titler - både hele cder og enkelte numre. Får du alt for mange resultater ved brug af Alle titler, kan du bruge Albumtitel på cd eller kombinere med en kunstner eller komponist.';
  $element->sort = -58;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['577a6e95-a4c4-1364-9d35-b520727a66e3'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '5df33489-ff26-4594-39a5-023549872bbb';
  $element->element_title = 'film_titel';
  $element->element_label = 'Filmens titel';
  $element->description = 'fx jernladyen';
  $element->help_text = 'Her kan du søge på filmens titel - skriv et eller flere ord fra filmens titel.
Ex lost fire
';
  $element->sort = -68;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['5df33489-ff26-4594-39a5-023549872bbb'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '5ea753c8-576f-e764-b1ce-9468e41e232b';
  $element->element_title = 'artikel_forfatter';
  $element->element_label = 'Artiklens forfatter';
  $element->description = 'fx morten albæk';
  $element->help_text = 'Skriv det eller de dele af forfatterens navn du kender.
Ex: mette højbjerg';
  $element->sort = -85;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['5ea753c8-576f-e764-b1ce-9468e41e232b'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '5ff70a4a-b5aa-8db4-e983-a06513693474';
  $element->element_title = 'net_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: klimakonference?';
  $element->help_text = 'Her søger du i de fleste oplysninger i posterne
Du kan sætte en * - når du er i tvivl
Du skal ikke skrive &#039;og&#039; mellem ordene.';
  $element->sort = -77;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['5ff70a4a-b5aa-8db4-e983-a06513693474'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '613a4f50-fdc5-6304-5536-55a506c96dbc';
  $element->element_title = 'spil_genre';
  $element->element_label = 'Spilgenre, type';
  $element->description = 'fx actionspil';
  $element->help_text = 'Klik på Vælg genre og vælg fra genrerne. Ikke alle spil har en genrebetegnelse.';
  $element->sort = -71;
  $element->tab_index = 0;
  $element->access_key = 's';
  $export['613a4f50-fdc5-6304-5536-55a506c96dbc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '66e5ef39-d2b1-e894-7db7-15b6bee02962';
  $element->element_title = 'film_personer';
  $element->element_label = 'Personer';
  $element->description = 'fx Trine Dyrholm';
  $element->help_text = 'Her kan du søge på instruktører, medvirkende m.v. Du kan også skrive to navne som medvirker sammen. Men ikke alle poster indeholder alle disse oplysninger.
Der sættes - og - mellem de ord du skriver.';
  $element->sort = -67;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['66e5ef39-d2b1-e894-7db7-15b6bee02962'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '68bee1ea-4906-5ab4-4904-2fb2b0069ce6';
  $element->element_title = 'film_bibliotekets_aldersanbefaling';
  $element->element_label = 'Aldersanbefaling';
  $element->description = 'Biblioteket anbefaler';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe filmen er egnet til.
Hold Ctrl nede for at vælge mere end én.';
  $element->sort = -62;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['68bee1ea-4906-5ab4-4904-2fb2b0069ce6'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $element->element_title = 'år';
  $element->element_label = 'Udgivelsesår';
  $element->description = 'Vælg Før, Efter eller Lig med et år';
  $element->help_text = 'Vælg Lig med, Før eller Efter og et årstal';
  $element->sort = -95;
  $element->tab_index = 0;
  $element->access_key = 'y';
  $export['6c70823e-0c81-c3d4-f9b8-716937b6c813'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '76e8d8bc-900b-e0d4-c972-c6d3340e41b3';
  $element->element_title = 'net_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx tekster på nettet';
  $element->help_text = 'Vælg et materiale på listen, hvis du ikke vil søge i alle materialer.';
  $element->sort = -75;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['76e8d8bc-900b-e0d4-c972-c6d3340e41b3'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '7edd8a17-86e1-e314-01ab-50e0cc8f2105';
  $element->element_title = 'film_nationalitet';
  $element->element_label = 'Nationalitet';
  $element->description = 'fx japanske spillefilm';
  $element->help_text = 'Her er mulighed for at få et udvalg af spillefilm fra nogle lande.
Du finder ikke alle film fra de nævnte lande.';
  $element->sort = -64;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['7edd8a17-86e1-e314-01ab-50e0cc8f2105'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '7f9b063a-03d0-d9a4-1111-abc05eb3e744';
  $element->element_title = 'artikel_titelord';
  $element->element_label = 'Artikel titelord';
  $element->description = 'fx credo';
  $element->help_text = 'Skriv et eller flere ord fra titlen.
Hvis du skriver flere ord, kombinerer systemet dem med og.';
  $element->sort = -84;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['7f9b063a-03d0-d9a4-1111-abc05eb3e744'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '8726964c-42b7-4354-91a1-77066f51d3b7';
  $element->element_title = 'fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx matterhorn';
  $element->help_text = 'Søg fritekst:
Her søger du i de fleste oplysninger i posterne. Du kan sætte en joker (trunkering):  * - når du er i tvivl. Ex.: lånemulighed*. Du skal ikke skrive og mellem ordene. ';
  $element->sort = -97;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['8726964c-42b7-4354-91a1-77066f51d3b7'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '888ee223-738e-e0f4-cd78-521318cbab37';
  $element->element_title = 'artikler_net_sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx engelsk';
  $element->help_text = 'Vælg kun sprog, hvis din søgning ellers bliver for stor.';
  $element->sort = -80;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['888ee223-738e-e0f4-cd78-521318cbab37'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '8b0aa552-dfa4-2fb4-358b-458787ee7b79';
  $element->element_title = 'titel';
  $element->element_label = 'Titel';
  $element->description = 'fx varm luft';
  $element->help_text = 'Søg titel:
Skriv et eller flere ord fra titlen - flere ord kombinerer systemet med et og.
Sæt evt. * til sidst som joker eller trunkeringstegn, fx indian*';
  $element->sort = -99;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['8b0aa552-dfa4-2fb4-358b-458787ee7b79'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '8d3b9c95-d4dc-8134-3565-ee212b143534';
  $element->element_title = 'film_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx dvd';
  $element->help_text = 'Klik på et materiale, hvis du kun ønsker en bestemt type.';
  $element->sort = -63;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['8d3b9c95-d4dc-8134-3565-ee212b143534'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '8ef145dd-bd72-6094-6d1a-b2c4397b5778';
  $element->element_title = 'spil_bibliotekets_aldersanbefaling';
  $element->element_label = 'Aldersanbefaling';
  $element->description = 'Biblioteket anbefaler';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe biblioteket mener spillet er egnet til.';
  $element->sort = -70;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['8ef145dd-bd72-6094-6d1a-b2c4397b5778'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '9101b5e8-b14a-c6f4-2598-3e788568b1bc';
  $element->element_title = 'musik_hovedophav';
  $element->element_label = 'Hovedkunstner, -komponist, -gruppe';
  $element->description = 'fx: medina';
  $element->help_text = 'Brug Hovedkunstner, hvis du får alt for mange fund ved at bruge Medvirkende.
Her finder du kun det som vedkommende er hovedansvarlig for - fx kun Medinas egne plader - og ikke alle dem hvor hun (eller en anden med samme navn blot bidrager.';
  $element->sort = -59;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['9101b5e8-b14a-c6f4-2598-3e788568b1bc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '91759857-b357-a1c4-a145-f5a9547e9725';
  $element->element_title = 'bog_materialer';
  $element->element_label = 'Materialetype';
  $element->description = 'fx trykte bøger';
  $element->help_text = 'Vælg et andet materiale hvis du ikke kun ønsker Trykte bøger. Ønsker du helt andre materialer: Brug søgning Alle materialer.
E-bøger kan ikke kombineres med Litterær form eller Målgruppe.';
  $element->sort = -90;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['91759857-b357-a1c4-a145-f5a9547e9725'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '960e56f7-9ab5-ea94-cd0b-31116bcdeadc';
  $element->element_title = 'spil_medierådets_aldersanbefaling';
  $element->element_label = 'Medierådets aldersanbefalinger';
  $element->description = 'PEGI aldersmærkning';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe Medierådet vurderer spillets indhold er passende for.
PEGI mærkningen fortæller ikke hvor svært spillet er, men om det kan være skræmmende.
Læs mere om PEGI-afmærkning. link';
  $element->sort = -69;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['960e56f7-9ab5-ea94-cd0b-31116bcdeadc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a198be8b-2ff8-13c4-b17f-9f101fcae8fc';
  $element->element_title = 'net_emne';
  $element->element_label = 'Emne';
  $element->description = 'fx mozart';
  $element->help_text = 'Skriv dit emne eller starten på det ord du søger noget om.';
  $element->sort = -76;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['a198be8b-2ff8-13c4-b17f-9f101fcae8fc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a9b79f24-8bae-7cc4-4d82-fac33507cbb0';
  $element->element_title = 'film_genre';
  $element->element_label = 'Genre, type';
  $element->description = 'Fx drama';
  $element->help_text = 'Klik på Vælg genre og vælg en eller flere genrer. Ikke alle film har en genrebetegnelse.';
  $element->sort = -66;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['a9b79f24-8bae-7cc4-4d82-fac33507cbb0'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'af6e7bc9-1e65-bf34-11ec-a5d9d2150af4';
  $element->element_title = 'musik_materialer';
  $element->element_label = 'Materiale';
  $element->description = 'fx cd musik';
  $element->help_text = 'Sæt tjekmærke ved et eller flere materialer, hvis du kun ønsker disse.';
  $element->sort = -54;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['af6e7bc9-1e65-bf34-11ec-a5d9d2150af4'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'b3d8f654-30c9-d114-5550-a4fb03046996';
  $element->element_title = 'bog_emne';
  $element->element_label = 'Emne';
  $element->description = 'fx sejlsport';
  $element->help_text = 'Søg emne:
Skriv dit emne eller starten på det ord du søger noget om - skriver du flere ord kombinerer systemet med og.
Senere kan du evt. bruge Flere søgemuligheder.';
  $element->sort = -92;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['b3d8f654-30c9-d114-5550-a4fb03046996'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'b5fdcacc-b721-0c14-7118-66f34c73111a';
  $element->element_title = 'musik_ophav2';
  $element->element_label = 'Medvirkende';
  $element->description = 'fx: villazon';
  $element->help_text = 'Medvirkende:
i begge felter kan du søge på musikere, sangere, grupper og komponister. De to felter betyder at du kan kombinere to sangere eller en kunstner og en komponist.';
  $element->sort = 10;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['b5fdcacc-b721-0c14-7118-66f34c73111a'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'c701f1b9-3464-37c4-e538-0302ca2a387e';
  $element->element_title = 'artikel_tidsskrift_avis';
  $element->element_label = 'Tidsskrift eller avis';
  $element->description = 'fx ekko';
  $element->help_text = 'Brug dette felt, hvis du søger noget fra en bestemt avis eller et tidsskrift.
Skriv det eller de dele af bladets navn du kender.
Hvis du skriver flere ord, kombinerer systemet dem med og.
Ex: samvirke';
  $element->sort = -86;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['c701f1b9-3464-37c4-e538-0302ca2a387e'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'c9dbcd26-0aa1-8f94-b5a3-f26f163b59d8';
  $element->element_title = 'musik_albumtitel';
  $element->element_label = 'Albumtitel';
  $element->description = 'fx: planet earth';
  $element->help_text = 'Albumtitel: her får du kun poster hvor dit søgeord står i navnet på albummet (cd, båndet, pladen, netmusik, videoen eller dvden).';
  $element->sort = -57;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['c9dbcd26-0aa1-8f94-b5a3-f26f163b59d8'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'e74cadf0-cd77-93b4-dd64-8cd38abb1083';
  $element->element_title = 'sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx spansk';
  $element->help_text = 'Vælg et sprog';
  $element->sort = -53;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['e74cadf0-cd77-93b4-dd64-8cd38abb1083'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'e9797cde-c26a-02e4-954d-d806e01fd5ab';
  $element->element_title = 'net_titel';
  $element->element_label = 'Titel';
  $element->description = 'fx sort arbejde';
  $element->help_text = 'Skriv et eller flere ord fra titlen. ';
  $element->sort = -78;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['e9797cde-c26a-02e4-954d-d806e01fd5ab'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ec0803a6-f912-4044-cd1b-e8df09e054f8';
  $element->element_title = 'spil_titel';
  $element->element_label = 'Titel';
  $element->description = 'fx bulletstorm';
  $element->help_text = 'Her kan du søge på spillets titel.';
  $element->sort = -74;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ec0803a6-f912-4044-cd1b-e8df09e054f8'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ef95443c-fda8-bfa4-99b4-40d78c904edc';
  $element->element_title = 'artikel_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx avisartikler';
  $element->help_text = 'Vælg på rullemenuen hvis du ikke ønsker Alle artikler.
Ønsker du helt andre materialer: Brug Almindelig søgning';
  $element->sort = -81;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ef95443c-fda8-bfa4-99b4-40d78c904edc'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'f2b46a6a-1553-65b4-8161-4419c5ae748f';
  $element->element_title = 'bog_forfatter';
  $element->element_label = 'Forfatter';
  $element->description = 'fx fossum';
  $element->help_text = 'Skriv den eller de dele af navnet, du er sikker på.
Kombiner evt. med et ord fra titlen - det skal skrives i titelboksen.
Senere kan du evt. bruge Flere søgemuligheder.';
  $element->sort = -94;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['f2b46a6a-1553-65b4-8161-4419c5ae748f'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'f8fc7021-fe06-1034-89f6-1f1d1ccdda23';
  $element->element_title = 'spil_platform';
  $element->element_label = 'Platform';
  $element->description = 'fx nintendo ds';
  $element->help_text = 'Vælg en eller flere platforme.';
  $element->sort = -72;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['f8fc7021-fe06-1034-89f6-1f1d1ccdda23'] = $element;

  return $export;
}

/**
 * Implements hook_default_bibdk_custom_search_map_element().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_map_element() {
  $export = array();

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = 'af6e7bc9-1e65-bf34-11ec-a5d9d2150af4';
  $map_element->me_uuid = '00f0908b-702d-47e4-11ab-55048bedd959';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['00f0908b-702d-47e4-11ab-55048bedd959'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '100d19c8-6104-7dd4-edca-576ddee7c38d';
  $map_element->me_uuid = '0bef3bcb-6dae-a5b4-054f-650141be5ba0';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['0bef3bcb-6dae-a5b4-054f-650141be5ba0'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = 'e9797cde-c26a-02e4-954d-d806e01fd5ab';
  $map_element->me_uuid = '0d51c204-55a5-1564-7978-602f36f81296';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['0d51c204-55a5-1564-7978-602f36f81296'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_element->me_uuid = '1d23eef3-4e9e-5bc4-f906-6d707166bb71';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['1d23eef3-4e9e-5bc4-f906-6d707166bb71'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = 'ef95443c-fda8-bfa4-99b4-40d78c904edc';
  $map_element->me_uuid = '220262c1-283a-5134-19ad-7113a170108d';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['220262c1-283a-5134-19ad-7113a170108d'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = '8b0aa552-dfa4-2fb4-358b-458787ee7b79';
  $map_element->me_uuid = '23faf969-06a1-cca4-c910-1c6c94171536';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['23faf969-06a1-cca4-c910-1c6c94171536'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '7edd8a17-86e1-e314-01ab-50e0cc8f2105';
  $map_element->me_uuid = '280d0ebd-468c-10c4-fdc8-e2b37b854ddf';
  $map_element->region = 'main';
  $map_element->sort = -46;
  $export['280d0ebd-468c-10c4-fdc8-e2b37b854ddf'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $map_element->e_uuid = '613a4f50-fdc5-6304-5536-55a506c96dbc';
  $map_element->me_uuid = '31d57bf6-82a3-09f4-99f4-9bf82752b7aa';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['31d57bf6-82a3-09f4-99f4-9bf82752b7aa'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '056cd2a1-7657-76e4-d1cc-841eb2d17cbc';
  $map_element->me_uuid = '3cff7f52-3364-fe04-79e0-925c04247d8f';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['3cff7f52-3364-fe04-79e0-925c04247d8f'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = '76e8d8bc-900b-e0d4-c972-c6d3340e41b3';
  $map_element->me_uuid = '3f749204-609a-6924-f9ce-3c707614abb9';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['3f749204-609a-6924-f9ce-3c707614abb9'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '5df33489-ff26-4594-39a5-023549872bbb';
  $map_element->me_uuid = '4034327d-f2bb-97d4-9d39-051a256e9b81';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['4034327d-f2bb-97d4-9d39-051a256e9b81'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_element->me_uuid = '4d90a7ac-a220-7454-f9d0-097e65919b12';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['4d90a7ac-a220-7454-f9d0-097e65919b12'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = '5ea753c8-576f-e764-b1ce-9468e41e232b';
  $map_element->me_uuid = '4f8e44ab-1928-1264-fd28-d743d786f503';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['4f8e44ab-1928-1264-fd28-d743d786f503'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $map_element->e_uuid = 'ec0803a6-f912-4044-cd1b-e8df09e054f8';
  $map_element->me_uuid = '4fea53b5-d3eb-3d74-5db0-4cc3a9c24b28';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['4fea53b5-d3eb-3d74-5db0-4cc3a9c24b28'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = 'b5fdcacc-b721-0c14-7118-66f34c73111a';
  $map_element->me_uuid = '54b72c7e-1da9-7384-1dc3-624655f4caf3';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['54b72c7e-1da9-7384-1dc3-624655f4caf3'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = '134049ec-6be0-3be4-5541-d97ff96377eb';
  $map_element->me_uuid = '54ccbb79-428c-ccc4-d55d-d2664d96b0cd';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['54ccbb79-428c-ccc4-d55d-d2664d96b0cd'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = '42c99e78-f2c3-69a4-8d0a-0ab1f4e76e79';
  $map_element->me_uuid = '5a6f9a94-2275-6874-b5f3-c830116858fe';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['5a6f9a94-2275-6874-b5f3-c830116858fe'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_element->me_uuid = '5da1f962-b10e-7264-1121-669dc2ddcef7';
  $map_element->region = 'expand';
  $map_element->sort = -44;
  $export['5da1f962-b10e-7264-1121-669dc2ddcef7'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '91759857-b357-a1c4-a145-f5a9547e9725';
  $map_element->me_uuid = '61813411-4c5f-c6e4-f57d-e886e30d2dfd';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['61813411-4c5f-c6e4-f57d-e886e30d2dfd'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = 'c9dbcd26-0aa1-8f94-b5a3-f26f163b59d8';
  $map_element->me_uuid = '64ed5616-03bc-bd64-9999-bf378c7fac45';
  $map_element->region = 'main';
  $map_element->sort = -46;
  $export['64ed5616-03bc-bd64-9999-bf378c7fac45'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $map_element->e_uuid = '8ef145dd-bd72-6094-6d1a-b2c4397b5778';
  $map_element->me_uuid = '6920ac36-b1e5-5a34-15f3-9453ac36df28';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['6920ac36-b1e5-5a34-15f3-9453ac36df28'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = 'b3d8f654-30c9-d114-5550-a4fb03046996';
  $map_element->me_uuid = '6b819e01-8caf-1f44-6902-a6aa9fdae10e';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['6b819e01-8caf-1f44-6902-a6aa9fdae10e'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = 'e74cadf0-cd77-93b4-dd64-8cd38abb1083';
  $map_element->me_uuid = '6d4fc2cf-5e8b-6de4-a560-47b76f3204c6';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['6d4fc2cf-5e8b-6de4-a560-47b76f3204c6'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '68bee1ea-4906-5ab4-4904-2fb2b0069ce6';
  $map_element->me_uuid = '7b1db59e-b137-ed14-0970-fcf57040ff4f';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['7b1db59e-b137-ed14-0970-fcf57040ff4f'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '0a253843-1684-ee94-81dd-9ea005010668';
  $map_element->me_uuid = 'a9d5b5e7-7d67-0974-29a3-21ab8468a8d1';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['a9d5b5e7-7d67-0974-29a3-21ab8468a8d1'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = '3f19f0dc-b0e7-2f34-c9d2-bbbcf83f1a7f';
  $map_element->me_uuid = 'aa62033d-97b8-b194-b5f4-d945da784d7c';
  $map_element->region = 'main';
  $map_element->sort = -45;
  $export['aa62033d-97b8-b194-b5f4-d945da784d7c'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = '888ee223-738e-e0f4-cd78-521318cbab37';
  $map_element->me_uuid = 'adb39a9f-c13c-16e4-45f9-388cc09a623b';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['adb39a9f-c13c-16e4-45f9-388cc09a623b'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = 'f2b46a6a-1553-65b4-8161-4419c5ae748f';
  $map_element->me_uuid = 'af12e4ec-3c7c-b4b4-1d8c-601c2eb51717';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['af12e4ec-3c7c-b4b4-1d8c-601c2eb51717'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = 'c701f1b9-3464-37c4-e538-0302ca2a387e';
  $map_element->me_uuid = 'b19c0158-5c42-e444-e9f6-8fcc2267d4f7';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['b19c0158-5c42-e444-e9f6-8fcc2267d4f7'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = '3480ebc2-df1c-34a4-2146-fd0819bef99f';
  $map_element->me_uuid = 'b5e7eef6-859c-ad94-d578-975402ceabb1';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['b5e7eef6-859c-ad94-d578-975402ceabb1'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = '45601074-408d-a524-a1f1-0b83592adb30';
  $map_element->me_uuid = 'b81412cb-c4d2-6bf4-b1a1-91eb597e2fb5';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['b81412cb-c4d2-6bf4-b1a1-91eb597e2fb5'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = '888ee223-738e-e0f4-cd78-521318cbab37';
  $map_element->me_uuid = 'bcd63346-bf57-45f4-591d-5dbb42c177ed';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['bcd63346-bf57-45f4-591d-5dbb42c177ed'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_element->me_uuid = 'bd1cf0e1-2980-1974-799a-36b07ebc28c0';
  $map_element->region = 'expand';
  $map_element->sort = -49;
  $export['bd1cf0e1-2980-1974-799a-36b07ebc28c0'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '30d729e7-7acd-3c74-f9fe-c54a0db53b00';
  $map_element->me_uuid = 'c382730d-a046-3e94-41d3-ccefcd75b1ed';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['c382730d-a046-3e94-41d3-ccefcd75b1ed'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'defa0c2c-754f-1cb4-a11a-c37ae2a677f7';
  $map_element->e_uuid = 'a198be8b-2ff8-13c4-b17f-9f101fcae8fc';
  $map_element->me_uuid = 'c59c2c46-2ce5-2f04-3588-5f90084d3343';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['c59c2c46-2ce5-2f04-3588-5f90084d3343'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = '7f9b063a-03d0-d9a4-1111-abc05eb3e744';
  $map_element->me_uuid = 'c79c0598-1a8a-d0e4-8dc0-723f1e41a106';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['c79c0598-1a8a-d0e4-8dc0-723f1e41a106'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'ce97eeb6-5d38-6a24-c524-d96cc3193335';
  $map_element->e_uuid = '16211341-fade-5054-e9b8-534632e77fc6';
  $map_element->me_uuid = 'd2dff84a-3f9c-2f24-9d29-4ed5a150c493';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['d2dff84a-3f9c-2f24-9d29-4ed5a150c493'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = '577a6e95-a4c4-1364-9d35-b520727a66e3';
  $map_element->me_uuid = 'd56159de-ff88-caa4-2d6c-86007208a012';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['d56159de-ff88-caa4-2d6c-86007208a012'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '085dc6d0-ea45-4784-bdeb-d4b7e4ab9197';
  $map_element->e_uuid = '00ac2ddd-96c7-fbe4-018a-e6c0c34338e7';
  $map_element->me_uuid = 'd7007f9e-4447-9fd4-9dd0-62079ed3bd0b';
  $map_element->region = 'expand';
  $map_element->sort = -50;
  $export['d7007f9e-4447-9fd4-9dd0-62079ed3bd0b'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = 'a9b79f24-8bae-7cc4-4d82-fac33507cbb0';
  $map_element->me_uuid = 'd9cd1376-a434-b624-b194-ddd517386929';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['d9cd1376-a434-b624-b194-ddd517386929'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '013870a2-3c08-21d4-65bf-0db021d11463';
  $map_element->e_uuid = '9101b5e8-b14a-c6f4-2598-3e788568b1bc';
  $map_element->me_uuid = 'da4b1ace-28f5-6544-394f-44a1efd1919e';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['da4b1ace-28f5-6544-394f-44a1efd1919e'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '66e5ef39-d2b1-e894-7db7-15b6bee02962';
  $map_element->me_uuid = 'df572e2d-27ac-cc44-8de9-b00fcec33918';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['df572e2d-27ac-cc44-8de9-b00fcec33918'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $map_element->e_uuid = 'f8fc7021-fe06-1034-89f6-1f1d1ccdda23';
  $map_element->me_uuid = 'e7bde9f0-4751-7524-ad4f-04bfc7d9486f';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['e7bde9f0-4751-7524-ad4f-04bfc7d9486f'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b9772b3b-8582-7894-2d4a-ba0e11e02782';
  $map_element->e_uuid = '8d3b9c95-d4dc-8134-3565-ee212b143534';
  $map_element->me_uuid = 'ed184fa6-20fa-af94-e1b8-f820a2ef2bad';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['ed184fa6-20fa-af94-e1b8-f820a2ef2bad'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b271b4be-7691-e8b4-5136-ec364d09cad6';
  $map_element->e_uuid = '161f5183-b254-7f44-a5df-10257190c9b2';
  $map_element->me_uuid = 'f87e06d7-9bc7-0044-0581-9684ea30108b';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['f87e06d7-9bc7-0044-0581-9684ea30108b'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '13d4c64a-99e0-1eb4-6963-fd34e37b9f4f';
  $map_element->e_uuid = '960e56f7-9ab5-ea94-cd0b-31116bcdeadc';
  $map_element->me_uuid = 'fd2b20d2-096d-3254-3d1e-a166dd1755c6';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['fd2b20d2-096d-3254-3d1e-a166dd1755c6'] = $map_element;

  return $export;
}

/**
 * Implements hook_default_bibdk_custom_search_map_value().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_map_value() {
  $export = array();

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '05de1cbd-7fdd-2fe4-a164-2427a3f94116';
  $map_values->e_uuid = '5ff70a4a-b5aa-8db4-e983-a06513693474';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['05de1cbd-7fdd-2fe4-a164-2427a3f94116'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '080fed95-bb1b-d9a4-556d-272664083759';
  $map_values->e_uuid = '134049ec-6be0-3be4-5541-d97ff96377eb';
  $map_values->v_uuid = '89423fd2-8b28-cf64-1958-81b8fea71570';
  $map_values->sort = 10;
  $export['080fed95-bb1b-d9a4-556d-272664083759'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0bb4214a-46f4-5694-9922-f1b703468e49';
  $map_values->e_uuid = '8d3b9c95-d4dc-8134-3565-ee212b143534';
  $map_values->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $map_values->sort = 10;
  $export['0bb4214a-46f4-5694-9922-f1b703468e49'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '10641023-644e-a794-85ea-37903bbe3387';
  $map_values->e_uuid = '161f5183-b254-7f44-a5df-10257190c9b2';
  $map_values->v_uuid = '0553e37b-57ef-a194-cd81-d89ee905a94c';
  $map_values->sort = 10;
  $export['10641023-644e-a794-85ea-37903bbe3387'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '13b0e495-a22b-3a44-35c7-13c19336e90e';
  $map_values->e_uuid = '577a6e95-a4c4-1364-9d35-b520727a66e3';
  $map_values->v_uuid = '90e1ced5-fe3c-7a84-ad33-6d02bfe23847';
  $map_values->sort = 10;
  $export['13b0e495-a22b-3a44-35c7-13c19336e90e'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '3399fb79-976a-1bf4-49f6-6cd76f1c6371';
  $map_values->e_uuid = '42c99e78-f2c3-69a4-8d0a-0ab1f4e76e79';
  $map_values->v_uuid = '0b61b366-ac92-ec04-39e6-6c58c355c9b0';
  $map_values->sort = 10;
  $export['3399fb79-976a-1bf4-49f6-6cd76f1c6371'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '355772e0-ade5-73e4-011d-67bcc6d38bf4';
  $map_values->e_uuid = '4f349cf2-e113-bf64-7592-979cfc2bc50e';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['355772e0-ade5-73e4-011d-67bcc6d38bf4'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '35daff8d-1e7c-0df4-1dfd-3d8e21a657b3';
  $map_values->e_uuid = '8726964c-42b7-4354-91a1-77066f51d3b7';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['35daff8d-1e7c-0df4-1dfd-3d8e21a657b3'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '3a487d4a-8590-46d4-6550-26d6dfcde63f';
  $map_values->e_uuid = '888ee223-738e-e0f4-cd78-521318cbab37';
  $map_values->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $map_values->sort = 10;
  $export['3a487d4a-8590-46d4-6550-26d6dfcde63f'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '3dea4a76-b0bd-ac24-75ff-e75d2f480de4';
  $map_values->e_uuid = '056cd2a1-7657-76e4-d1cc-841eb2d17cbc';
  $map_values->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $map_values->sort = 10;
  $export['3dea4a76-b0bd-ac24-75ff-e75d2f480de4'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '44302221-f772-a4c4-758d-114018879455';
  $map_values->e_uuid = '3480ebc2-df1c-34a4-2146-fd0819bef99f';
  $map_values->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $map_values->sort = 10;
  $export['44302221-f772-a4c4-758d-114018879455'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '46556f4e-a74c-2374-1500-6b9fef455bd9';
  $map_values->e_uuid = '68bee1ea-4906-5ab4-4904-2fb2b0069ce6';
  $map_values->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $map_values->sort = 10;
  $export['46556f4e-a74c-2374-1500-6b9fef455bd9'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '4d52e5d4-f8f7-bd64-59c8-2c61b51df48d';
  $map_values->e_uuid = '8b0aa552-dfa4-2fb4-358b-458787ee7b79';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['4d52e5d4-f8f7-bd64-59c8-2c61b51df48d'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '50216662-eab4-3014-4d07-7bdcea97e938';
  $map_values->e_uuid = 'af6e7bc9-1e65-bf34-11ec-a5d9d2150af4';
  $map_values->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $map_values->sort = 10;
  $export['50216662-eab4-3014-4d07-7bdcea97e938'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '52449e2c-4d7b-c5b4-1947-a11695ef19e1';
  $map_values->e_uuid = 'c701f1b9-3464-37c4-e538-0302ca2a387e';
  $map_values->v_uuid = '4c8ef8ae-7561-7424-b989-3c26dc76c8be';
  $map_values->sort = 10;
  $export['52449e2c-4d7b-c5b4-1947-a11695ef19e1'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '58134473-cedd-2a04-a1a1-4a4dc58f76fa';
  $map_values->e_uuid = '3f19f0dc-b0e7-2f34-c9d2-bbbcf83f1a7f';
  $map_values->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $map_values->sort = 10;
  $export['58134473-cedd-2a04-a1a1-4a4dc58f76fa'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '5e9eb86c-0edc-e684-75a5-87a8a1c6f6f8';
  $map_values->e_uuid = '613a4f50-fdc5-6304-5536-55a506c96dbc';
  $map_values->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $map_values->sort = 10;
  $export['5e9eb86c-0edc-e684-75a5-87a8a1c6f6f8'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '5eb4da28-e575-eb64-554d-2a7a03949b03';
  $map_values->e_uuid = '100d19c8-6104-7dd4-edca-576ddee7c38d';
  $map_values->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $map_values->sort = 10;
  $export['5eb4da28-e575-eb64-554d-2a7a03949b03'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6513e5a6-d6ad-3694-214c-ef014bc57251';
  $map_values->e_uuid = '66e5ef39-d2b1-e894-7db7-15b6bee02962';
  $map_values->v_uuid = '1ecd1156-7598-bfb4-2de5-09af2e71e738';
  $map_values->sort = 10;
  $export['6513e5a6-d6ad-3694-214c-ef014bc57251'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6593c8ba-5b2f-d754-e9f3-2496ca568364';
  $map_values->e_uuid = '00ac2ddd-96c7-fbe4-018a-e6c0c34338e7';
  $map_values->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $map_values->sort = 10;
  $export['6593c8ba-5b2f-d754-e9f3-2496ca568364'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6c276e9a-d075-d3b4-b992-fc2ee293c16d';
  $map_values->e_uuid = 'a9b79f24-8bae-7cc4-4d82-fac33507cbb0';
  $map_values->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $map_values->sort = 10;
  $export['6c276e9a-d075-d3b4-b992-fc2ee293c16d'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6f652e5c-2c8a-8884-ad77-6021eb6644d3';
  $map_values->e_uuid = 'e9797cde-c26a-02e4-954d-d806e01fd5ab';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['6f652e5c-2c8a-8884-ad77-6021eb6644d3'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '70f9c359-9ff1-e0f4-e1b1-da800391e51b';
  $map_values->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_values->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $map_values->sort = -100;
  $export['70f9c359-9ff1-e0f4-e1b1-da800391e51b'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '7117ae53-8594-cd14-3181-8872a2e89a14';
  $map_values->e_uuid = '4dee7338-429a-e9b4-2597-273c3ed2e3b0';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['7117ae53-8594-cd14-3181-8872a2e89a14'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '719feee2-52a8-5b94-3553-82ed1bb5e8c3';
  $map_values->e_uuid = '960e56f7-9ab5-ea94-cd0b-31116bcdeadc';
  $map_values->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $map_values->sort = 10;
  $export['719feee2-52a8-5b94-3553-82ed1bb5e8c3'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '7504a9c3-cd5d-0874-7d71-565d03cc8a8b';
  $map_values->e_uuid = 'ec0803a6-f912-4044-cd1b-e8df09e054f8';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['7504a9c3-cd5d-0874-7d71-565d03cc8a8b'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '75d7968e-271e-f7b4-7138-caad9bba3d46';
  $map_values->e_uuid = '76e8d8bc-900b-e0d4-c972-c6d3340e41b3';
  $map_values->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $map_values->sort = 10;
  $export['75d7968e-271e-f7b4-7138-caad9bba3d46'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '79a2c418-c939-25a4-457a-95cdfa2cf11a';
  $map_values->e_uuid = '30d729e7-7acd-3c74-f9fe-c54a0db53b00';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['79a2c418-c939-25a4-457a-95cdfa2cf11a'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '7bf9a60b-cf52-d6c4-3585-c1daff23a048';
  $map_values->e_uuid = '0a253843-1684-ee94-81dd-9ea005010668';
  $map_values->v_uuid = '1e3eff5a-4288-57a4-81dc-e52dafc160e1';
  $map_values->sort = 10;
  $export['7bf9a60b-cf52-d6c4-3585-c1daff23a048'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '8e265e37-9110-e604-210e-93d311d6b3e6';
  $map_values->e_uuid = '9101b5e8-b14a-c6f4-2598-3e788568b1bc';
  $map_values->v_uuid = '4e426688-35dd-4ab4-699d-e8e3ffd6ce6c';
  $map_values->sort = 10;
  $export['8e265e37-9110-e604-210e-93d311d6b3e6'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '8fd231c4-baec-7ce4-75a6-c3278493003a';
  $map_values->e_uuid = 'c9dbcd26-0aa1-8f94-b5a3-f26f163b59d8';
  $map_values->v_uuid = 'a9dcf90c-87fc-3ff4-d977-2cc6ec8b29c7';
  $map_values->sort = 10;
  $export['8fd231c4-baec-7ce4-75a6-c3278493003a'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '90028061-b065-90f4-49ee-64672c06cdde';
  $map_values->e_uuid = '91759857-b357-a1c4-a145-f5a9547e9725';
  $map_values->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $map_values->sort = 10;
  $export['90028061-b065-90f4-49ee-64672c06cdde'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '91974e8f-ac78-5534-11e6-245a1eebfa0b';
  $map_values->e_uuid = 'a198be8b-2ff8-13c4-b17f-9f101fcae8fc';
  $map_values->v_uuid = '89423fd2-8b28-cf64-1958-81b8fea71570';
  $map_values->sort = 10;
  $export['91974e8f-ac78-5534-11e6-245a1eebfa0b'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '9fb9e646-775e-2374-d57f-7d2727984fc6';
  $map_values->e_uuid = '45601074-408d-a524-a1f1-0b83592adb30';
  $map_values->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $map_values->sort = 10;
  $export['9fb9e646-775e-2374-d57f-7d2727984fc6'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'a3a03325-998d-6ef4-c14a-53ee38ed817b';
  $map_values->e_uuid = 'b5fdcacc-b721-0c14-7118-66f34c73111a';
  $map_values->v_uuid = '9d03148c-ef3f-f404-0ddd-34b7bcbb03b4';
  $map_values->sort = 10;
  $export['a3a03325-998d-6ef4-c14a-53ee38ed817b'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'a4cf6503-e84a-3ec4-8993-3478eebbe372';
  $map_values->e_uuid = '7edd8a17-86e1-e314-01ab-50e0cc8f2105';
  $map_values->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $map_values->sort = 10;
  $export['a4cf6503-e84a-3ec4-8993-3478eebbe372'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'b0f1dd52-f5e3-2984-e5df-3eeb98ecb24c';
  $map_values->e_uuid = 'f2b46a6a-1553-65b4-8161-4419c5ae748f';
  $map_values->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $map_values->sort = 10;
  $export['b0f1dd52-f5e3-2984-e5df-3eeb98ecb24c'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'ba8f88ad-1064-2fe4-5182-5f5c219ed217';
  $map_values->e_uuid = '8ef145dd-bd72-6094-6d1a-b2c4397b5778';
  $map_values->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $map_values->sort = 10;
  $export['ba8f88ad-1064-2fe4-5182-5f5c219ed217'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'bf226137-16b5-00d4-8dd7-31e90df24e5f';
  $map_values->e_uuid = '5ea753c8-576f-e764-b1ce-9468e41e232b';
  $map_values->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $map_values->sort = 10;
  $export['bf226137-16b5-00d4-8dd7-31e90df24e5f'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'c09aa75e-2b6b-e4e4-c1da-3e560ad2a6f6';
  $map_values->e_uuid = 'b3d8f654-30c9-d114-5550-a4fb03046996';
  $map_values->v_uuid = '89423fd2-8b28-cf64-1958-81b8fea71570';
  $map_values->sort = 10;
  $export['c09aa75e-2b6b-e4e4-c1da-3e560ad2a6f6'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'c0aab152-989e-2df4-c93b-2de6c1282761';
  $map_values->e_uuid = '1b055086-7684-f3e4-a5ad-9dc6e9967c23';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['c0aab152-989e-2df4-c93b-2de6c1282761'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'c40b6b7c-a703-b6f4-5d65-6c3930455b43';
  $map_values->e_uuid = 'e74cadf0-cd77-93b4-dd64-8cd38abb1083';
  $map_values->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $map_values->sort = 10;
  $export['c40b6b7c-a703-b6f4-5d65-6c3930455b43'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'ca5f828c-7bfb-c5f4-95d9-d1d9e08619ff';
  $map_values->e_uuid = 'f8fc7021-fe06-1034-89f6-1f1d1ccdda23';
  $map_values->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $map_values->sort = 10;
  $export['ca5f828c-7bfb-c5f4-95d9-d1d9e08619ff'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'd2aed44f-3e77-abb4-6d14-3e874ec737c2';
  $map_values->e_uuid = '16211341-fade-5054-e9b8-534632e77fc6';
  $map_values->v_uuid = '89423fd2-8b28-cf64-1958-81b8fea71570';
  $map_values->sort = 10;
  $export['d2aed44f-3e77-abb4-6d14-3e874ec737c2'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'de4e6fe6-f7ba-8774-ed2f-efc8718137d0';
  $map_values->e_uuid = 'ef95443c-fda8-bfa4-99b4-40d78c904edc';
  $map_values->v_uuid = '4f0662cc-77fd-a994-795b-15156ba0ef34';
  $map_values->sort = 10;
  $export['de4e6fe6-f7ba-8774-ed2f-efc8718137d0'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'e107df68-904a-2eb4-b5ff-d6d338e169cc';
  $map_values->e_uuid = '7f9b063a-03d0-d9a4-1111-abc05eb3e744';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['e107df68-904a-2eb4-b5ff-d6d338e169cc'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'e22df93d-d9e5-ab44-0563-a14837ac5783';
  $map_values->e_uuid = '5df33489-ff26-4594-39a5-023549872bbb';
  $map_values->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $map_values->sort = 10;
  $export['e22df93d-d9e5-ab44-0563-a14837ac5783'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'ebccf33b-68ea-3b34-995a-1aad2048bfee';
  $map_values->e_uuid = '0db52b2d-26c8-96d4-f1cb-a74760332a34';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['ebccf33b-68ea-3b34-995a-1aad2048bfee'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'f608e7ff-e469-e784-317e-88c2ff65eee9';
  $map_values->e_uuid = '6c70823e-0c81-c3d4-f9b8-716937b6c813';
  $map_values->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $map_values->sort = -99;
  $export['f608e7ff-e469-e784-317e-88c2ff65eee9'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'fa0274c3-d91a-5cd4-99a6-5ea7b6e5af86';
  $map_values->e_uuid = '508e56ff-b344-49c4-7dc9-d4a8e2975a12';
  $map_values->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $map_values->sort = 10;
  $export['fa0274c3-d91a-5cd4-99a6-5ea7b6e5af86'] = $map_values;

  return $export;
}

/**
 * Implements hook_default_bibdk_custom_search_option().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_option() {
  $export = array();

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '003323df-ac62-3594-39c3-c298fdbaba2d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -31;
  $option->label = '1945';
  $option->value = '1945';
  $option->expand = 0;
  $export['003323df-ac62-3594-39c3-c298fdbaba2d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0115df78-6690-7964-2510-66fef47848de';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -92;
  $option->label = 'racerspil';
  $option->value = 'racerspil';
  $option->expand = 0;
  $export['0115df78-6690-7964-2510-66fef47848de'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '013cae83-94fc-e864-5d52-a279f37c51b9';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -90;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['013cae83-94fc-e864-5d52-a279f37c51b9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '01d502fa-1dae-ffb4-e575-486b8b5e7a24';
  $option->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $option->sort = -98;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['01d502fa-1dae-ffb4-e575-486b8b5e7a24'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '01e6d8d5-c6e5-5154-097a-489050b97709';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -12;
  $option->label = '1926';
  $option->value = '1926';
  $option->expand = 0;
  $export['01e6d8d5-c6e5-5154-097a-489050b97709'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '029c46a4-d5a2-8384-658e-a220152ecfc9';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -97;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['029c46a4-d5a2-8384-658e-a220152ecfc9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '031d8049-e3c3-b5f4-21d2-c89b7e058930';
  $option->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $option->sort = -97;
  $option->label = 'blu-ray';
  $option->value = 'blu-ray';
  $option->expand = 0;
  $export['031d8049-e3c3-b5f4-21d2-c89b7e058930'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '03a44c2a-f381-f614-b92c-b172e335be45';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -88;
  $option->label = 'Fra 13 år';
  $option->value = 'Fra 13 år';
  $option->expand = 0;
  $export['03a44c2a-f381-f614-b92c-b172e335be45'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '044e1c4b-5ac6-b5e4-a174-a182bc50b21e';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -93;
  $option->label = 'xbox';
  $option->value = 'xbox';
  $option->expand = 0;
  $export['044e1c4b-5ac6-b5e4-a174-a182bc50b21e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '04575bcc-40a0-3f64-69fe-77667c06f1a3';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -92;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['04575bcc-40a0-3f64-69fe-77667c06f1a3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '04ee64de-5aea-7f94-852c-2d3366313d17';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -87;
  $option->label = 'strategispil';
  $option->value = 'strategispil';
  $option->expand = 0;
  $export['04ee64de-5aea-7f94-852c-2d3366313d17'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '05651696-83fe-c134-311f-5562502597bd';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -68;
  $option->label = 'vietnamesisk';
  $option->value = 'vietnamesisk';
  $option->expand = 0;
  $export['05651696-83fe-c134-311f-5562502597bd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0594523b-c02e-0654-4540-47ce915298ca';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 9;
  $option->label = '1905';
  $option->value = '1905';
  $option->expand = 0;
  $export['0594523b-c02e-0654-4540-47ce915298ca'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '063249f9-00ec-6394-fdd5-4ae526d4d63b';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -83;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['063249f9-00ec-6394-fdd5-4ae526d4d63b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0705b17b-6105-e754-393c-72da9ba9e28d';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -93;
  $option->label = 'Fra 8 år';
  $option->value = 'Fra 8 år';
  $option->expand = 0;
  $export['0705b17b-6105-e754-393c-72da9ba9e28d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '07b1b2ac-9e46-b024-8936-f1e7bc056232';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -83;
  $option->label = 'persisk';
  $option->value = 'persisk';
  $option->expand = 0;
  $export['07b1b2ac-9e46-b024-8936-f1e7bc056232'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '07e919b3-c8a6-9a14-6d75-e246842210b9';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -97;
  $option->label = 'eventyrspil';
  $option->value = 'eventyrspil';
  $option->expand = 0;
  $export['07e919b3-c8a6-9a14-6d75-e246842210b9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '08a7cb03-30bf-18c4-e5e4-73aea9b8ae4c';
  $option->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $option->sort = -97;
  $option->label = 'Kærlighed';
  $option->value = 'kærlighed';
  $option->expand = 0;
  $export['08a7cb03-30bf-18c4-e5e4-73aea9b8ae4c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '08d16402-4410-3ab4-0178-dc13c66846a6';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -87;
  $option->label = 'Fra 14 år';
  $option->value = 'Fra 14 år';
  $option->expand = 0;
  $export['08d16402-4410-3ab4-0178-dc13c66846a6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '09d1bf33-6ee2-fd54-05b3-977e73e32c1b';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -30;
  $option->label = '1944';
  $option->value = '1944';
  $option->expand = 0;
  $export['09d1bf33-6ee2-fd54-05b3-977e73e32c1b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0b3a084f-b496-b2a4-9558-44fd03fea500';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -96;
  $option->label = 'nintendo ds';
  $option->value = 'nintendo ds';
  $option->expand = 0;
  $export['0b3a084f-b496-b2a4-9558-44fd03fea500'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0be1ed5d-8a3c-ce74-a19b-aaf1f59a4584';
  $option->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $option->sort = -96;
  $option->label = 'vhs';
  $option->value = 'video';
  $option->expand = 0;
  $export['0be1ed5d-8a3c-ce74-a19b-aaf1f59a4584'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0c7f5d1c-c7f6-b924-a9ac-4353f0ce2eda';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -96;
  $option->label = 'farsi';
  $option->value = 'farsi';
  $option->expand = 0;
  $export['0c7f5d1c-c7f6-b924-a9ac-4353f0ce2eda'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0d8bacba-3a1a-9c54-b5a5-470a2130ea66';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -37;
  $option->label = '1951';
  $option->value = '1951';
  $option->expand = 0;
  $export['0d8bacba-3a1a-9c54-b5a5-470a2130ea66'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0db8d645-dedb-a474-998e-2920a4e4b52d';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -93;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['0db8d645-dedb-a474-998e-2920a4e4b52d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0ecbb6be-8534-12a4-4559-d28752b50f6f';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -95;
  $option->label = 'lydbøger på nettet';
  $option->value = 'lydbog (net)';
  $option->expand = 0;
  $export['0ecbb6be-8534-12a4-4559-d28752b50f6f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '101109d6-03c6-18f4-7d45-ca57cd0bfbdf';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -86;
  $option->label = 'film (alle typer)';
  $option->value = 'film';
  $option->expand = 0;
  $export['101109d6-03c6-18f4-7d45-ca57cd0bfbdf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1121c83a-aae9-c9f4-8dcf-b78200e602ed';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -96;
  $option->label = 'Fra 5 år';
  $option->value = 'Fra 5 år';
  $option->expand = 0;
  $export['1121c83a-aae9-c9f4-8dcf-b78200e602ed'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '11b6862b-05e5-a284-ade7-15c543b7294f';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -82;
  $option->label = 'ungarsk';
  $option->value = 'ungarsk';
  $option->expand = 0;
  $export['11b6862b-05e5-a284-ade7-15c543b7294f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '120fd494-3995-3ac4-29a9-ac3f0a464f28';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -99;
  $option->label = 'arabisk';
  $option->value = 'arabisk';
  $option->expand = 0;
  $export['120fd494-3995-3ac4-29a9-ac3f0a464f28'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '136460d2-2881-b9b4-c95d-f7d29184bb99';
  $option->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $option->sort = -99;
  $option->label = 'Drama';
  $option->value = 'drama';
  $option->expand = 0;
  $export['136460d2-2881-b9b4-c95d-f7d29184bb99'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '140a8400-ccd4-fa04-3193-e3fbd151c892';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -59;
  $option->label = '1973';
  $option->value = '1973';
  $option->expand = 0;
  $export['140a8400-ccd4-fa04-3193-e3fbd151c892'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '14ee94c0-9104-0a14-5de2-ddf28de9ed0a';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -87;
  $option->label = 'Fra 14 år';
  $option->value = 'Fra 14 år';
  $option->expand = 0;
  $export['14ee94c0-9104-0a14-5de2-ddf28de9ed0a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '157f744c-b5c0-3e74-1901-33992c06a440';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -90;
  $option->label = 'lydbøger';
  $option->value = 'lydbog';
  $option->expand = 31;
  $export['157f744c-b5c0-3e74-1901-33992c06a440'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '15b5d01c-9d61-b664-7d0b-d357ac74e705';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -87;
  $option->label = '2001';
  $option->value = '2001';
  $option->expand = 0;
  $export['15b5d01c-9d61-b664-7d0b-d357ac74e705'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '160e55a1-efa3-7304-01e4-d50bdb2443b9';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -47;
  $option->label = '1961';
  $option->value = '1961';
  $option->expand = 0;
  $export['160e55a1-efa3-7304-01e4-d50bdb2443b9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '16112a95-e786-0414-b595-85fa6cbd8b1e';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -93;
  $option->label = 'noder på nettet';
  $option->value = 'noder';
  $option->expand = 0;
  $export['16112a95-e786-0414-b595-85fa6cbd8b1e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '165073e4-c52a-64d4-6955-9052517cd384';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -94;
  $option->label = 'farsi';
  $option->value = 'farsi';
  $option->expand = 0;
  $export['165073e4-c52a-64d4-6955-9052517cd384'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '16bf1f84-5350-0594-817d-f5a188261d66';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -88;
  $option->label = 'portugisisk';
  $option->value = 'portugisisk';
  $option->expand = 0;
  $export['16bf1f84-5350-0594-817d-f5a188261d66'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '171ef58a-4490-90b4-d9ff-c0e939d3b522';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -63;
  $option->label = '1977';
  $option->value = '1977';
  $option->expand = 0;
  $export['171ef58a-4490-90b4-d9ff-c0e939d3b522'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '18a1bf0c-d2c2-a234-6172-3cb5f5b7e678';
  $option->v_uuid = 'e3e9565c-3ce4-bba4-6d66-90fd314d06a0';
  $option->sort = -98;
  $option->label = 'tegneserier';
  $option->value = 'tegneserier';
  $option->expand = 0;
  $export['18a1bf0c-d2c2-a234-6172-3cb5f5b7e678'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '18dd9f26-7ec1-1154-d94f-dc509a8c456c';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -94;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['18dd9f26-7ec1-1154-d94f-dc509a8c456c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '19a8f4d2-a451-ca74-41de-6d1900a16e88';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -85;
  $option->label = 'film';
  $option->value = 'film';
  $option->expand = 19;
  $export['19a8f4d2-a451-ca74-41de-6d1900a16e88'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '19dfbfdf-f406-6af4-8d75-c4cecf48b29a';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -97;
  $option->label = 'playstation 3';
  $option->value = 'playstation 3';
  $option->expand = 0;
  $export['19dfbfdf-f406-6af4-8d75-c4cecf48b29a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1b03b5be-bcdc-43a4-71d1-dead7632af18';
  $option->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $option->sort = -98;
  $option->label = 'på nettet';
  $option->value = 'lydbog (net)';
  $option->expand = 0;
  $export['1b03b5be-bcdc-43a4-71d1-dead7632af18'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1bbb4673-4b8b-b514-516c-bf999ff78b7e';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -18;
  $option->label = '1932';
  $option->value = '1932';
  $option->expand = 0;
  $export['1bbb4673-4b8b-b514-516c-bf999ff78b7e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1d6bb427-4fcc-bee4-1d83-5c84cff02b49';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -94;
  $option->label = 'wii';
  $option->value = 'wii';
  $option->expand = 0;
  $export['1d6bb427-4fcc-bee4-1d83-5c84cff02b49'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1e6c0ba1-0170-4e84-d509-a79e03f64966';
  $option->v_uuid = '1e3eff5a-4288-57a4-81dc-e52dafc160e1';
  $option->sort = 10;
  $option->label = 'Faglitteratur';
  $option->value = 'nonfiktion';
  $option->expand = 0;
  $export['1e6c0ba1-0170-4e84-d509-a79e03f64966'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1f19fb5c-d36b-e154-8dfc-cad0e41bb964';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -100;
  $option->label = 'alle';
  $option->value = '';
  $option->expand = 0;
  $export['1f19fb5c-d36b-e154-8dfc-cad0e41bb964'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1f380211-05c4-93d4-0540-6feaf5675d8c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -95;
  $option->label = '2009';
  $option->value = '2009';
  $option->expand = 0;
  $export['1f380211-05c4-93d4-0540-6feaf5675d8c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1fdac557-3ae0-5f14-ad31-e08234c9b38c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 0;
  $option->label = '1914';
  $option->value = '1914';
  $option->expand = 0;
  $export['1fdac557-3ae0-5f14-ad31-e08234c9b38c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2037291a-fd76-2494-914c-4380d8c0aaba';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -96;
  $option->label = 'japanske spillefilm';
  $option->value = 'japansk';
  $option->expand = 0;
  $export['2037291a-fd76-2494-914c-4380d8c0aaba'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2164e13f-77f6-a2c4-f95a-702f473b4a97';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -89;
  $option->label = 'computerspil (alle)';
  $option->value = 'spil';
  $option->expand = 0;
  $export['2164e13f-77f6-a2c4-f95a-702f473b4a97'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '21bfebf2-7120-dbe4-a567-6972b06c1966';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -70;
  $option->label = 'ungarsk';
  $option->value = 'ungarsk';
  $option->expand = 0;
  $export['21bfebf2-7120-dbe4-a567-6972b06c1966'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '21d53882-301a-8564-99d5-391cc637b5fb';
  $option->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $option->sort = 10;
  $option->label = 'fjhfjhgfjh';
  $option->value = 'nnj';
  $option->expand = 0;
  $export['21d53882-301a-8564-99d5-391cc637b5fb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2352e2c5-71e1-2c24-3517-04a081ce8f76';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -73;
  $option->label = 'tjekkisk';
  $option->value = 'tjekkisk';
  $option->expand = 0;
  $export['2352e2c5-71e1-2c24-3517-04a081ce8f76'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '23faae76-e841-79c4-a5cf-e2029550869e';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -32;
  $option->label = '1946';
  $option->value = '1946';
  $option->expand = 0;
  $export['23faae76-e841-79c4-a5cf-e2029550869e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2506f777-bde2-6cf4-5deb-c41e169b7094';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -90;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['2506f777-bde2-6cf4-5deb-c41e169b7094'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '276b6b97-5085-1584-0d6f-5ff9732429b1';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -77;
  $option->label = '1991';
  $option->value = '1991';
  $option->expand = 0;
  $export['276b6b97-5085-1584-0d6f-5ff9732429b1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '296757c3-adf0-85e4-7d4a-4ea608d880d7';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -97;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['296757c3-adf0-85e4-7d4a-4ea608d880d7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '29e79dc3-37c1-f034-bda7-6e6f039a1694';
  $option->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $option->sort = -99;
  $option->label = 'dvd';
  $option->value = 'dvd';
  $option->expand = 0;
  $export['29e79dc3-37c1-f034-bda7-6e6f039a1694'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '29ebf9e1-2d08-eb94-ed40-68295b88ae18';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -90;
  $option->label = 'shooters';
  $option->value = 'shooters';
  $option->expand = 0;
  $export['29ebf9e1-2d08-eb94-ed40-68295b88ae18'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2a01adf5-0152-ae34-0dcc-4ca8ebb77b51';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -95;
  $option->label = 'Fra 6 år';
  $option->value = 'Fra 6 år';
  $option->expand = 0;
  $export['2a01adf5-0152-ae34-0dcc-4ca8ebb77b51'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2a5669df-dd18-6004-5d3c-2f28236c274b';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -53;
  $option->label = '1967';
  $option->value = '1967';
  $option->expand = 0;
  $export['2a5669df-dd18-6004-5d3c-2f28236c274b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2ad28cbe-48b8-c2f4-718c-386bb696f70b';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -92;
  $option->label = 'Fra 9 år';
  $option->value = 'Fra 9 år';
  $option->expand = 0;
  $export['2ad28cbe-48b8-c2f4-718c-386bb696f70b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2c1e2e83-65f2-b254-5509-10a6546ee621';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -83;
  $option->label = 'musik';
  $option->value = 'musik';
  $option->expand = 26;
  $export['2c1e2e83-65f2-b254-5509-10a6546ee621'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2cad1036-e202-9054-d58d-603e53c2ed5c';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -98;
  $option->label = 'bosnisk';
  $option->value = 'bosnisk';
  $option->expand = 0;
  $export['2cad1036-e202-9054-d58d-603e53c2ed5c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2d94bb45-eeea-f094-d950-dd8f1c1be929';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -2;
  $option->label = '1916';
  $option->value = '1916';
  $option->expand = 0;
  $export['2d94bb45-eeea-f094-d950-dd8f1c1be929'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '30d21922-157b-11c4-b9b6-f9e7e0ac725e';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -86;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['30d21922-157b-11c4-b9b6-f9e7e0ac725e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '30f63bd6-08c3-3fd4-d946-3bd2ba30cdf9';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -93;
  $option->label = 'platformspil';
  $option->value = 'platformspil';
  $option->expand = 0;
  $export['30f63bd6-08c3-3fd4-d946-3bd2ba30cdf9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '31c882d0-c7b0-86c4-4d3a-e16583db4262';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -99;
  $option->label = 'arabisk';
  $option->value = 'arabisk';
  $option->expand = 0;
  $export['31c882d0-c7b0-86c4-4d3a-e16583db4262'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '33a5531a-0f34-a434-012c-973d92715ec8';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -93;
  $option->label = 'finsk';
  $option->value = 'finsk';
  $option->expand = 0;
  $export['33a5531a-0f34-a434-012c-973d92715ec8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '344eb2ab-81f3-9f44-25ef-fbb4adba5ed0';
  $option->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $option->sort = -97;
  $option->label = 'osv';
  $option->value = '';
  $option->expand = 0;
  $export['344eb2ab-81f3-9f44-25ef-fbb4adba5ed0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '349ea532-4495-8824-55e7-a3cef6c694ef';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -96;
  $option->label = 'hovedbrudsspil';
  $option->value = '(hovedbrudsspil eller brætspil eller quiz eller puslespil)';
  $option->expand = 0;
  $export['349ea532-4495-8824-55e7-a3cef6c694ef'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '359defcb-0eec-82d4-d581-812b7b9fffba';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 4;
  $option->label = '1910';
  $option->value = '1910';
  $option->expand = 0;
  $export['359defcb-0eec-82d4-d581-812b7b9fffba'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '35ea70bc-a7c7-98f4-651a-73a992db5b15';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -96;
  $option->label = 'punktskrift (braille)';
  $option->value = 'punktskrift';
  $option->expand = 0;
  $export['35ea70bc-a7c7-98f4-651a-73a992db5b15'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '377024fe-bf85-e2f4-5515-af4a4224c66c';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -99;
  $option->label = 'pc-spil';
  $option->value = 'pc-spil';
  $option->expand = 0;
  $export['377024fe-bf85-e2f4-5515-af4a4224c66c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '37c94539-2ea7-ac54-798e-0b4ff518522f';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -97;
  $option->label = 'italienske spillefilm';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['37c94539-2ea7-ac54-798e-0b4ff518522f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3838011e-7d3c-6d74-c581-def76b2eafff';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -99;
  $option->label = 'danske spillefilm';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['3838011e-7d3c-6d74-c581-def76b2eafff'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3892d565-3547-c754-c908-5c2523c0f2b6';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -78;
  $option->label = 'serbisk';
  $option->value = 'serbisk';
  $option->expand = 0;
  $export['3892d565-3547-c754-c908-5c2523c0f2b6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '396e4e91-e660-9a64-31ed-f593efb5d1cb';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -96;
  $option->label = 'Fra 16 år';
  $option->value = 'Fra 16 år';
  $option->expand = 0;
  $export['396e4e91-e660-9a64-31ed-f593efb5d1cb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '39a994a4-1c4b-ecf4-95a9-bf9065886895';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -52;
  $option->label = '1966';
  $option->value = '1966';
  $option->expand = 0;
  $export['39a994a4-1c4b-ecf4-95a9-bf9065886895'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a203920-538f-c604-8159-dd5adda885e2';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -44;
  $option->label = '1958';
  $option->value = '1958';
  $option->expand = 0;
  $export['3a203920-538f-c604-8159-dd5adda885e2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a420ff3-28e7-8bf4-5969-ad2e73832849';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -76;
  $option->label = '1990';
  $option->value = '1990';
  $option->expand = 0;
  $export['3a420ff3-28e7-8bf4-5969-ad2e73832849'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a6d5a1f-8aff-e1e4-c194-2bd8ebb34057';
  $option->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $option->sort = -96;
  $option->label = 'fra NOTA';
  $option->value = 'nota';
  $option->expand = 0;
  $export['3a6d5a1f-8aff-e1e4-c194-2bd8ebb34057'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a95fd85-cfd2-bc84-7d70-662e78ef6927';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -94;
  $option->label = 'lydbøger - NOTA';
  $option->value = 'nota';
  $option->expand = 0;
  $export['3a95fd85-cfd2-bc84-7d70-662e78ef6927'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3b27e005-4897-2514-cd43-5c894f16f6e6';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -96;
  $option->label = 'aviser';
  $option->value = 'avis';
  $option->expand = 0;
  $export['3b27e005-4897-2514-cd43-5c894f16f6e6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3b587382-fbbb-f1a4-11f9-7c5e21504a31';
  $option->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $option->sort = 10;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['3b587382-fbbb-f1a4-11f9-7c5e21504a31'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3b86ac9b-1abe-b474-05c8-aba18d249bcc';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -97;
  $option->label = 'Fra 4 år';
  $option->value = 'Fra 4 år';
  $option->expand = 0;
  $export['3b86ac9b-1abe-b474-05c8-aba18d249bcc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3b90d808-d377-c4f4-a9c6-2715eca3f383';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -94;
  $option->label = 'artikler';
  $option->value = 'avisartikel OR tidsskriftartikel';
  $option->expand = 41;
  $export['3b90d808-d377-c4f4-a9c6-2715eca3f383'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3b94eadf-e70c-8804-9df4-0c707b4af627';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -7;
  $option->label = '1921';
  $option->value = '1921';
  $option->expand = 0;
  $export['3b94eadf-e70c-8804-9df4-0c707b4af627'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3ba7b9cb-b9ad-0ed4-9d4f-28c525985a96';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -33;
  $option->label = '1947';
  $option->value = '1947';
  $option->expand = 0;
  $export['3ba7b9cb-b9ad-0ed4-9d4f-28c525985a96'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3c2b80bc-a3fc-5964-f1b7-30f3c1268127';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -88;
  $option->label = 'computerspil';
  $option->value = 'spil';
  $option->expand = 11;
  $export['3c2b80bc-a3fc-5964-f1b7-30f3c1268127'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3caf62b2-a293-5504-2d92-43b3ab48f4cf';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -89;
  $option->label = 'simulationspil';
  $option->value = '(simulationsspil eller managerspil)';
  $option->expand = 0;
  $export['3caf62b2-a293-5504-2d92-43b3ab48f4cf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3e857eb7-29e3-4804-29d3-8143982126c7';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -95;
  $option->label = 'artikler (alle typer)';
  $option->value = 'avisartikel OR tidsskriftartikel';
  $option->expand = 0;
  $export['3e857eb7-29e3-4804-29d3-8143982126c7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '405f76e1-ddbb-9ff4-0dba-ca60a8047826';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -92;
  $option->label = 'net';
  $option->value = 'netdokument';
  $option->expand = 22;
  $export['405f76e1-ddbb-9ff4-0dba-ca60a8047826'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4077c008-8800-a554-add5-07de4ed4b0b0';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -98;
  $option->label = 'bøger';
  $option->value = 'bog';
  $option->expand = 5;
  $export['4077c008-8800-a554-add5-07de4ed4b0b0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '40df0634-316c-e3c4-d531-675f36c99a67';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -69;
  $option->label = 'urdu';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['40df0634-316c-e3c4-d531-675f36c99a67'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4185cd41-a166-6354-0912-7d4bf226b97a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -25;
  $option->label = '1939';
  $option->value = '1939';
  $option->expand = 0;
  $export['4185cd41-a166-6354-0912-7d4bf226b97a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4211cdbb-d800-9d94-71d9-86320935407e';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['4211cdbb-d800-9d94-71d9-86320935407e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4286ae7b-2cf5-f854-915a-94b9fa493095';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -91;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['4286ae7b-2cf5-f854-915a-94b9fa493095'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '42d8fb79-73af-2194-416f-1186b03e46a2';
  $option->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $option->sort = -96;
  $option->label = 'Tv-serier';
  $option->value = 'tvserier';
  $option->expand = 0;
  $export['42d8fb79-73af-2194-416f-1186b03e46a2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '435df896-1f6a-4844-19f6-6317c1115e0a';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -79;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['435df896-1f6a-4844-19f6-6317c1115e0a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '458966c0-1940-53e4-fde6-133010163811';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -93;
  $option->label = 'norske spillefilm';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['458966c0-1940-53e4-fde6-133010163811'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '45f210d5-7a79-fbf4-c92b-e003e2502536';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -60;
  $option->label = '1974';
  $option->value = '1974';
  $option->expand = 0;
  $export['45f210d5-7a79-fbf4-c92b-e003e2502536'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4618a040-bebf-8d14-79d2-8637dd08492b';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -54;
  $option->label = '1968';
  $option->value = '1968';
  $option->expand = 0;
  $export['4618a040-bebf-8d14-79d2-8637dd08492b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '48b5e1f7-d7f6-6534-3d3c-b955aaa7dc01';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -85;
  $option->label = 'kinesisk';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['48b5e1f7-d7f6-6534-3d3c-b955aaa7dc01'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '49c16391-189d-5064-15a8-d04a442a7acc';
  $option->v_uuid = '4f0662cc-77fd-a994-795b-15156ba0ef34';
  $option->sort = -98;
  $option->label = 'avisartikler';
  $option->value = 'avisartikel';
  $option->expand = 0;
  $export['49c16391-189d-5064-15a8-d04a442a7acc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4c2340ef-273e-5844-651e-bc06747cc4d7';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -97;
  $option->label = 'Fra 4 år';
  $option->value = 'Fra 4 år';
  $option->expand = 0;
  $export['4c2340ef-273e-5844-651e-bc06747cc4d7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4d2ff8d9-7215-8564-dd5f-1aa4e29aecac';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -90;
  $option->label = 'russiske spillefilm';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['4d2ff8d9-7215-8564-dd5f-1aa4e29aecac'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4d836d97-d3ec-f1d4-41e7-40fd8738b2c1';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -91;
  $option->label = 'lydbøger (alle typer)';
  $option->value = 'lydbog';
  $option->expand = 0;
  $export['4d836d97-d3ec-f1d4-41e7-40fd8738b2c1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4eb7083f-2d66-99a4-cdee-06814e4a6d4a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -96;
  $option->label = '2010';
  $option->value = '2010';
  $option->expand = 0;
  $export['4eb7083f-2d66-99a4-cdee-06814e4a6d4a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4f75fb03-5215-38f4-5989-e77bc28333ff';
  $option->v_uuid = '4f0662cc-77fd-a994-795b-15156ba0ef34';
  $option->sort = -99;
  $option->label = 'tidsskriftartikler';
  $option->value = 'tidsskriftartikel';
  $option->expand = 0;
  $export['4f75fb03-5215-38f4-5989-e77bc28333ff'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5068aea2-bc76-1694-79a8-1f299c25c687';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 12;
  $option->label = '1902';
  $option->value = '1902';
  $option->expand = 0;
  $export['5068aea2-bc76-1694-79a8-1f299c25c687'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '507a80af-ab50-ef14-81dc-aaa48801d4ba';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -85;
  $option->label = 'Fra 16 år';
  $option->value = 'Fra 16 år';
  $option->expand = 0;
  $export['507a80af-ab50-ef14-81dc-aaa48801d4ba'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '512e6dac-a7a7-cf04-dd11-46a232bb94c0';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 14;
  $option->label = '1900';
  $option->value = '1900';
  $option->expand = 0;
  $export['512e6dac-a7a7-cf04-dd11-46a232bb94c0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5266837e-26f5-b494-492b-d0c2a93b6e16';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -100;
  $option->label = 'alle';
  $option->value = '';
  $option->expand = 0;
  $export['5266837e-26f5-b494-492b-d0c2a93b6e16'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '52758a18-3a2a-8154-ed6f-8caa8ff6f532';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -87;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['52758a18-3a2a-8154-ed6f-8caa8ff6f532'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '52d33bf3-ed66-3474-dd73-1e1d0e3580fe';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -68;
  $option->label = '1982';
  $option->value = '1982';
  $option->expand = 0;
  $export['52d33bf3-ed66-3474-dd73-1e1d0e3580fe'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '53a72def-6b56-9ac4-cd8b-48d00c58533c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -5;
  $option->label = '1919';
  $option->value = '1919';
  $option->expand = 0;
  $export['53a72def-6b56-9ac4-cd8b-48d00c58533c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '53d4b651-bc59-44a4-15de-d3a47e448cd9';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -23;
  $option->label = '1937';
  $option->value = '1937';
  $option->expand = 0;
  $export['53d4b651-bc59-44a4-15de-d3a47e448cd9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5626161a-15f8-c8a4-0975-1de40a58bc4f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -40;
  $option->label = '1954';
  $option->value = '1954';
  $option->expand = 0;
  $export['5626161a-15f8-c8a4-0975-1de40a58bc4f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '576648b1-ea0d-0c54-757e-1c690154e82d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -8;
  $option->label = '1922';
  $option->value = '1922';
  $option->expand = 0;
  $export['576648b1-ea0d-0c54-757e-1c690154e82d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '58ab6e73-eb4f-98d4-15a8-6e94376e768c';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -99;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['58ab6e73-eb4f-98d4-15a8-6e94376e768c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '58cd4fff-bd3a-abc4-5d11-35e0da8aa0c6';
  $option->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $option->sort = -98;
  $option->label = 'Blues';
  $option->value = '';
  $option->expand = 0;
  $export['58cd4fff-bd3a-abc4-5d11-35e0da8aa0c6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '58ed942b-74d1-33a4-fd16-1e3318cdf421';
  $option->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $option->sort = -97;
  $option->label = 'bånd';
  $option->value = 'lydbog (bånd)';
  $option->expand = 0;
  $export['58ed942b-74d1-33a4-fd16-1e3318cdf421'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '598e3202-fc84-e184-b1a0-cbc597bb7da5';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -100;
  $option->label = 'Alle platforme';
  $option->value = '';
  $option->expand = 0;
  $export['598e3202-fc84-e184-b1a0-cbc597bb7da5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5a553877-3ed6-1ed4-0d7f-db9effcfd641';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['5a553877-3ed6-1ed4-0d7f-db9effcfd641'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5b0ae713-b327-e724-41e7-8d362e5e19f3';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -22;
  $option->label = '1936';
  $option->value = '1936';
  $option->expand = 0;
  $export['5b0ae713-b327-e724-41e7-8d362e5e19f3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5b29de2a-21a3-6b74-5987-bf1d1f31c39a';
  $option->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $option->sort = -100;
  $option->label = 'Alle typer';
  $option->value = '';
  $option->expand = 0;
  $export['5b29de2a-21a3-6b74-5987-bf1d1f31c39a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5d1ae6af-8345-9134-1184-1504c6a84d79';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -43;
  $option->label = '1957';
  $option->value = '1957';
  $option->expand = 0;
  $export['5d1ae6af-8345-9134-1184-1504c6a84d79'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5d6eec5b-ea46-75d4-0934-05f58d773eee';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -74;
  $option->label = 'thai';
  $option->value = 'thai';
  $option->expand = 0;
  $export['5d6eec5b-ea46-75d4-0934-05f58d773eee'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5e9415d9-212b-9774-8588-6a38f3caae1d';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -99;
  $option->label = 'actionspil';
  $option->value = 'actionspil';
  $option->expand = 0;
  $export['5e9415d9-212b-9774-8588-6a38f3caae1d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5f0ec50b-9295-e034-1d23-d45da80be2e0';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -96;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['5f0ec50b-9295-e034-1d23-d45da80be2e0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '60a942bc-e7ed-e834-e1a6-a64cb6f53a36';
  $option->v_uuid = '1e3eff5a-4288-57a4-81dc-e52dafc160e1';
  $option->sort = 10;
  $option->label = 'Skønlitteratur';
  $option->value = 'fiktion';
  $option->expand = 4;
  $export['60a942bc-e7ed-e834-e1a6-a64cb6f53a36'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '60e1d459-fe2a-f484-a5ae-673064553bc7';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -84;
  $option->label = 'tyrkisk';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['60e1d459-fe2a-f484-a5ae-673064553bc7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6205746c-d5f0-ca84-d9f3-950e0bf912b4';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -82;
  $option->label = 'polsk';
  $option->value = 'polsk';
  $option->expand = 0;
  $export['6205746c-d5f0-ca84-d9f3-950e0bf912b4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '645126e2-1560-abc4-854c-fb394a090164';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -88;
  $option->label = '2002';
  $option->value = '2002';
  $option->expand = 0;
  $export['645126e2-1560-abc4-854c-fb394a090164'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6723eb3e-8868-8c94-55e0-cc3cd808ad2f';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -86;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['6723eb3e-8868-8c94-55e0-cc3cd808ad2f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6b33cdb8-0023-61d4-0de8-a993db27128f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['6b33cdb8-0023-61d4-0de8-a993db27128f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6b63f4ec-0e59-8e54-e90d-e06280354079';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -86;
  $option->label = 'synge- og dansespil';
  $option->value = '(karaokespil eller dans)';
  $option->expand = 0;
  $export['6b63f4ec-0e59-8e54-e90d-e06280354079'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6c71fa70-1ec3-9594-e123-1161193efb51';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -35;
  $option->label = '1949';
  $option->value = '1949';
  $option->expand = 0;
  $export['6c71fa70-1ec3-9594-e123-1161193efb51'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6c92eec0-8237-f584-c59c-51204daef61b';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -61;
  $option->label = '1975';
  $option->value = '1975';
  $option->expand = 0;
  $export['6c92eec0-8237-f584-c59c-51204daef61b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6d6907e3-39a1-6274-49b0-5b2bdc6cbb9e';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 3;
  $option->label = '1911';
  $option->value = '1911';
  $option->expand = 0;
  $export['6d6907e3-39a1-6274-49b0-5b2bdc6cbb9e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6e7f5a86-e15f-2384-c1c2-8f7ca2f08b1c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -92;
  $option->label = '2006';
  $option->value = '2006';
  $option->expand = 0;
  $export['6e7f5a86-e15f-2384-c1c2-8f7ca2f08b1c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7025f2ae-f8dd-72b4-4535-e39b2e29f746';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -74;
  $option->label = '1988';
  $option->value = '1988';
  $option->expand = 0;
  $export['7025f2ae-f8dd-72b4-4535-e39b2e29f746'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '705c39b2-cf8d-8ca4-b1ee-9168cb1be217';
  $option->v_uuid = 'e3e9565c-3ce4-bba4-6d66-90fd314d06a0';
  $option->sort = -99;
  $option->label = 'romaner';
  $option->value = 'romaner';
  $option->expand = 0;
  $export['705c39b2-cf8d-8ca4-b1ee-9168cb1be217'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7184cd1e-82c2-ad44-a5c2-40534a73fc19';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -90;
  $option->label = '2004';
  $option->value = '2004';
  $option->expand = 0;
  $export['7184cd1e-82c2-ad44-a5c2-40534a73fc19'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '72140fb5-fd23-5dd4-3d14-00c65e9f4e40';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -36;
  $option->label = '1950';
  $option->value = '1950';
  $option->expand = 0;
  $export['72140fb5-fd23-5dd4-3d14-00c65e9f4e40'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '72c73df5-15f9-2274-d1d0-c87b5e694fab';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -13;
  $option->label = '1927';
  $option->value = '1927';
  $option->expand = 0;
  $export['72c73df5-15f9-2274-d1d0-c87b5e694fab'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '72e8ac63-76d9-a5f4-f17c-6538c2bc7d79';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -90;
  $option->label = 'grønlandsk';
  $option->value = 'grønlandsk';
  $option->expand = 0;
  $export['72e8ac63-76d9-a5f4-f17c-6538c2bc7d79'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7368e0d6-73e6-8a34-853e-84b6c93cabd3';
  $option->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $option->sort = -99;
  $option->label = 'cd - mp3';
  $option->value = 'lydbog (cd-mp3)';
  $option->expand = 0;
  $export['7368e0d6-73e6-8a34-853e-84b6c93cabd3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7484b196-f06b-5584-6959-0b78aaf5df4d';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -100;
  $option->label = 'Biblioteket anbefaler';
  $option->value = '';
  $option->expand = 0;
  $export['7484b196-f06b-5584-6959-0b78aaf5df4d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '75bdd518-ddd8-a3f4-a55a-91a91072b787';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 10;
  $option->label = '1904';
  $option->value = '1904';
  $option->expand = 0;
  $export['75bdd518-ddd8-a3f4-a55a-91a91072b787'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '75f5bcc5-8774-b074-e5da-37cc85221c1e';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -56;
  $option->label = '1970';
  $option->value = '1970';
  $option->expand = 0;
  $export['75f5bcc5-8774-b074-e5da-37cc85221c1e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '76802bd0-b35c-e984-d916-dacd02681589';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -89;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['76802bd0-b35c-e984-d916-dacd02681589'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '769927f0-2317-8504-a1eb-379432a0b51b';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['769927f0-2317-8504-a1eb-379432a0b51b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '798dddfc-8f2c-acf4-499f-5df4c8644eee';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -99;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['798dddfc-8f2c-acf4-499f-5df4c8644eee'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '79a1f3da-5a52-4e94-f5ae-332c5bc41f18';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -9;
  $option->label = '1923';
  $option->value = '1923';
  $option->expand = 0;
  $export['79a1f3da-5a52-4e94-f5ae-332c5bc41f18'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7a209daa-0d3a-4e24-a59d-7a687b23dc96';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -67;
  $option->label = '1981';
  $option->value = '1981';
  $option->expand = 0;
  $export['7a209daa-0d3a-4e24-a59d-7a687b23dc96'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7ad5e2da-7f39-b824-6d82-58a0d167e864';
  $option->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $option->sort = -100;
  $option->label = 'cd - audio';
  $option->value = 'lydbog (cd)';
  $option->expand = 0;
  $export['7ad5e2da-7f39-b824-6d82-58a0d167e864'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7c16092c-04a8-5d34-a97b-d767ae735263';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -87;
  $option->label = 'cd-rom - men ikke spil';
  $option->value = 'cd-rom';
  $option->expand = 0;
  $export['7c16092c-04a8-5d34-a97b-d767ae735263'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7c61aa32-bdbd-5d04-994f-59e729462d28';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -96;
  $option->label = 'film på nettet';
  $option->value = 'film';
  $option->expand = 0;
  $export['7c61aa32-bdbd-5d04-994f-59e729462d28'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7e1c621e-28e0-5694-29fe-79e337096445';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -84;
  $option->label = '1998';
  $option->value = '1998';
  $option->expand = 0;
  $export['7e1c621e-28e0-5694-29fe-79e337096445'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7e836bbc-db85-5414-f916-ad14a51085a0';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -98;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['7e836bbc-db85-5414-f916-ad14a51085a0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7ecff262-548b-b6a4-f1ae-acf73e57ee4f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -72;
  $option->label = '1986';
  $option->value = '1986';
  $option->expand = 0;
  $export['7ecff262-548b-b6a4-f1ae-acf73e57ee4f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '80680856-34a0-d7a4-1d90-3834715d18d4';
  $option->v_uuid = '325cc385-637a-63d4-693b-6a8b9cdb8519';
  $option->sort = 10;
  $option->label = 'stor skrift';
  $option->value = 'bog stor skrift';
  $option->expand = 0;
  $export['80680856-34a0-d7a4-1d90-3834715d18d4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '814085a8-6a3e-8074-8dda-01b2130194db';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -57;
  $option->label = '1971';
  $option->value = '1971';
  $option->expand = 0;
  $export['814085a8-6a3e-8074-8dda-01b2130194db'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8149aaab-4732-a424-d18b-4e89b516d477';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -82;
  $option->label = '1996';
  $option->value = '1996';
  $option->expand = 0;
  $export['8149aaab-4732-a424-d18b-4e89b516d477'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '81c071ea-90cc-f344-4158-5e19c4452c83';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -95;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['81c071ea-90cc-f344-4158-5e19c4452c83'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '81e18961-83a1-a254-a5ff-cbc34495d05e';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -86;
  $option->label = '2000';
  $option->value = '2000';
  $option->expand = 0;
  $export['81e18961-83a1-a254-a5ff-cbc34495d05e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '83a85c26-3b74-bb44-0d6b-8c7266dc1997';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -94;
  $option->label = 'kassettebånd';
  $option->value = 'bånd';
  $option->expand = 0;
  $export['83a85c26-3b74-bb44-0d6b-8c7266dc1997'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8457db86-7a61-ebd4-559b-f47edfcb2ec7';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -100;
  $option->label = 'Alle typer musik';
  $option->value = '';
  $option->expand = 0;
  $export['8457db86-7a61-ebd4-559b-f47edfcb2ec7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '84a909aa-3ba3-84c4-095a-a201eece5937';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -92;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['84a909aa-3ba3-84c4-095a-a201eece5937'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8574693f-028d-9db4-1553-1f45ee1efe6a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -3;
  $option->label = '1917';
  $option->value = '1917';
  $option->expand = 0;
  $export['8574693f-028d-9db4-1553-1f45ee1efe6a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '861ec9cf-9490-89e4-6de5-ca4b20d238f3';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -86;
  $option->label = 'tyrkiske spillefilm';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['861ec9cf-9490-89e4-6de5-ca4b20d238f3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '86d29d87-a7f8-3004-ada0-6f6f24e0d073';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -90;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['86d29d87-a7f8-3004-ada0-6f6f24e0d073'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8745dac3-2644-d964-8159-9acff6d8f6ed';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -95;
  $option->label = 'grammofonplader';
  $option->value = 'grammofonplade';
  $option->expand = 0;
  $export['8745dac3-2644-d964-8159-9acff6d8f6ed'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '87a12345-9d45-49e4-1d9c-35cabab1f070';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -100;
  $option->label = 'PEGI aldersmærkning';
  $option->value = '';
  $option->expand = 0;
  $export['87a12345-9d45-49e4-1d9c-35cabab1f070'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '87c22c19-998f-5e64-8dcd-856700f56284';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -98;
  $option->label = 'adventurespil';
  $option->value = 'adventurespil';
  $option->expand = 0;
  $export['87c22c19-998f-5e64-8dcd-856700f56284'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '88c78eb6-5f59-b944-4d6c-8fc691519bb4';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -94;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['88c78eb6-5f59-b944-4d6c-8fc691519bb4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '89621835-0d67-3dd4-2916-e18ffe9e0815';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -81;
  $option->label = '1995';
  $option->value = '1995';
  $option->expand = 0;
  $export['89621835-0d67-3dd4-2916-e18ffe9e0815'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8a4f62e4-d256-c724-956a-85f97296b02f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -89;
  $option->label = '2003';
  $option->value = '2003';
  $option->expand = 0;
  $export['8a4f62e4-d256-c724-956a-85f97296b02f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8abbb443-68ad-e764-e1d0-8575f6a3ca47';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -4;
  $option->label = '1918';
  $option->value = '1918';
  $option->expand = 0;
  $export['8abbb443-68ad-e764-e1d0-8575f6a3ca47'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8c9406b3-0589-3ac4-9577-62fef64978f7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -19;
  $option->label = '1933';
  $option->value = '1933';
  $option->expand = 0;
  $export['8c9406b3-0589-3ac4-9577-62fef64978f7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8ccbec49-b341-5ac4-9d17-2784d3d53146';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -90;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['8ccbec49-b341-5ac4-9d17-2784d3d53146'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8d64e0ec-3da1-5234-8dad-8217e8722425';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -17;
  $option->label = '1931';
  $option->value = '1931';
  $option->expand = 0;
  $export['8d64e0ec-3da1-5234-8dad-8217e8722425'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8e1f1017-e4f2-5e24-258e-4247940fb0c2';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -48;
  $option->label = '1962';
  $option->value = '1962';
  $option->expand = 0;
  $export['8e1f1017-e4f2-5e24-258e-4247940fb0c2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8e362068-f9e6-f274-4de3-1701b4593dac';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -70;
  $option->label = '1984';
  $option->value = '1984';
  $option->expand = 0;
  $export['8e362068-f9e6-f274-4de3-1701b4593dac'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8ee08be3-b1b8-68a4-a9c2-0dffec66e994';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -98;
  $option->label = 'franske spillefilm';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['8ee08be3-b1b8-68a4-a9c2-0dffec66e994'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8f2e7f0c-4f0c-07c4-b5e8-38efa263e1b2';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -86;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['8f2e7f0c-4f0c-07c4-b5e8-38efa263e1b2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8f33abc6-2afe-88b4-558a-b41d816c4db4';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['8f33abc6-2afe-88b4-558a-b41d816c4db4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8faee9d4-f8cd-1814-49f0-2a0cec53223a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -39;
  $option->label = '1953';
  $option->value = '1953';
  $option->expand = 0;
  $export['8faee9d4-f8cd-1814-49f0-2a0cec53223a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8fcb818a-9255-7724-51b5-8ae0aab3a9de';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -97;
  $option->label = 'dvd';
  $option->value = 'dvd';
  $option->expand = 0;
  $export['8fcb818a-9255-7724-51b5-8ae0aab3a9de'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '91011745-302f-beb4-99f2-bc4a16f35a31';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -80;
  $option->label = 'rumænsk';
  $option->value = 'rumænsk';
  $option->expand = 0;
  $export['91011745-302f-beb4-99f2-bc4a16f35a31'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '93353a1a-e32d-ec44-4d10-cfaa386db30c';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -94;
  $option->label = 'hollandsk';
  $option->value = 'hollandsk';
  $option->expand = 0;
  $export['93353a1a-e32d-ec44-4d10-cfaa386db30c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '945c3b36-1965-49a4-fd4a-f3c6e7fa8033';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -75;
  $option->label = '1989';
  $option->value = '1989';
  $option->expand = 0;
  $export['945c3b36-1965-49a4-fd4a-f3c6e7fa8033'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '97edd253-8439-7854-a992-1e0f0b9c5485';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['97edd253-8439-7854-a992-1e0f0b9c5485'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '97ffd71f-09c2-ead4-75d5-0c1c8fa5db07';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -88;
  $option->label = 'sportsspil';
  $option->value = 'sportsspil';
  $option->expand = 0;
  $export['97ffd71f-09c2-ead4-75d5-0c1c8fa5db07'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '98030095-9b1d-5e64-3d57-233642fd1a25';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -20;
  $option->label = '1934';
  $option->value = '1934';
  $option->expand = 0;
  $export['98030095-9b1d-5e64-3d57-233642fd1a25'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '984f84d3-489b-71f4-9dda-cb64e59e281d';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -91;
  $option->label = 'Fra 10 år';
  $option->value = 'Fra 10 år';
  $option->expand = 0;
  $export['984f84d3-489b-71f4-9dda-cb64e59e281d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '98b9943b-d4e8-1dd4-f909-98bd3cc56084';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -66;
  $option->label = '1980';
  $option->value = '1980';
  $option->expand = 0;
  $export['98b9943b-d4e8-1dd4-f909-98bd3cc56084'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '99339b15-90b3-a6c4-c942-d1afc52301fd';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -99;
  $option->label = 'Fra 2 år';
  $option->value = 'Fra 2 år';
  $option->expand = 0;
  $export['99339b15-90b3-a6c4-c942-d1afc52301fd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '99730df2-4dc0-02c4-81fb-37937574ffbf';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -51;
  $option->label = '1965';
  $option->value = '1965';
  $option->expand = 0;
  $export['99730df2-4dc0-02c4-81fb-37937574ffbf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9a31d158-3c59-cde4-31c8-cb089366d7e4';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -76;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['9a31d158-3c59-cde4-31c8-cb089366d7e4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9a3448a0-4a60-5374-254e-6ee70680dba4';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -95;
  $option->label = 'Fra 6 år';
  $option->value = 'Fra 6 år';
  $option->expand = 0;
  $export['9a3448a0-4a60-5374-254e-6ee70680dba4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9d9af7a9-4f7c-8cb4-d9ce-37c7270b627f';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -99;
  $option->label = 'cd musik';
  $option->value = 'cd (musik)';
  $option->expand = 0;
  $export['9d9af7a9-4f7c-8cb4-d9ce-37c7270b627f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9d9e45da-d6d5-4554-49ac-22147d3757e3';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 6;
  $option->label = '1908';
  $option->value = '1908';
  $option->expand = 0;
  $export['9d9e45da-d6d5-4554-49ac-22147d3757e3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e0f4578-1c62-81c4-85f9-e0e6047d71d3';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 5;
  $option->label = '1909';
  $option->value = '1909';
  $option->expand = 0;
  $export['9e0f4578-1c62-81c4-85f9-e0e6047d71d3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9f658c3f-3255-a154-fd29-6780c6570982';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -97;
  $option->label = '2011';
  $option->value = '2011';
  $option->expand = 0;
  $export['9f658c3f-3255-a154-fd29-6780c6570982'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a1ba986c-41e5-b824-41a6-251ddc8aad39';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -49;
  $option->label = '1963';
  $option->value = '1963';
  $option->expand = 0;
  $export['a1ba986c-41e5-b824-41a6-251ddc8aad39'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a20113d0-1336-38d4-11ab-2743fc1c602d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -98;
  $option->label = '2012';
  $option->value = '2012';
  $option->expand = 0;
  $export['a20113d0-1336-38d4-11ab-2743fc1c602d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a25f389f-949f-59b4-b932-991a2405d2a4';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -16;
  $option->label = '1930';
  $option->value = '1930';
  $option->expand = 0;
  $export['a25f389f-949f-59b4-b932-991a2405d2a4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a388f6b6-b04d-8034-dd2f-46c7182c81b7';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -95;
  $option->label = 'Fra 18 år';
  $option->value = 'Fra 18 år';
  $option->expand = 0;
  $export['a388f6b6-b04d-8034-dd2f-46c7182c81b7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a3a003bc-6a20-97e4-5575-2c142058028c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -34;
  $option->label = '1948';
  $option->value = '1948';
  $option->expand = 0;
  $export['a3a003bc-6a20-97e4-5575-2c142058028c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a44613f9-0920-5654-fd10-f62dd392bdb1';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -93;
  $option->label = 'islandsk';
  $option->value = 'islandsk';
  $option->expand = 0;
  $export['a44613f9-0920-5654-fd10-f62dd392bdb1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a5e32819-b88e-ea24-c194-fa0268c6bf4b';
  $option->v_uuid = '4f0662cc-77fd-a994-795b-15156ba0ef34';
  $option->sort = -100;
  $option->label = 'artikler på nettet';
  $option->value = '';
  $option->expand = 0;
  $export['a5e32819-b88e-ea24-c194-fa0268c6bf4b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a6f514ee-8636-a994-6963-6366548c87a6';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 7;
  $option->label = '1907';
  $option->value = '1907';
  $option->expand = 0;
  $export['a6f514ee-8636-a994-6963-6366548c87a6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a80c03cf-1ae4-bb24-45ab-76f3158bea73';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -72;
  $option->label = 'tyrkisk';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['a80c03cf-1ae4-bb24-45ab-76f3158bea73'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a94ff974-6eef-e1b4-4193-d1cf76823f95';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -98;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['a94ff974-6eef-e1b4-4193-d1cf76823f95'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'aa285a4a-2c44-d514-adbf-683aa8244deb';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -55;
  $option->label = '1969';
  $option->value = '1969';
  $option->expand = 0;
  $export['aa285a4a-2c44-d514-adbf-683aa8244deb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ab45d36c-95e6-2a64-c942-b67e80b96922';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -100;
  $option->label = 'Biblioteket anbefaler';
  $option->value = '';
  $option->expand = 0;
  $export['ab45d36c-95e6-2a64-c942-b67e80b96922'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ab8164f0-2496-18d4-4d15-0064d8b02c3e';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -99;
  $option->label = 'bøger (alle typer)';
  $option->value = 'bog';
  $option->expand = 0;
  $export['ab8164f0-2496-18d4-4d15-0064d8b02c3e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ac79d3ab-dd02-2574-29e4-2bdf40372c1d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -27;
  $option->label = '1941';
  $option->value = '1941';
  $option->expand = 0;
  $export['ac79d3ab-dd02-2574-29e4-2bdf40372c1d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'acd4df0e-4c49-0cb4-9dc3-ba6ffeb68afe';
  $option->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $option->sort = -98;
  $option->label = 'film på nettet';
  $option->value = 'film (net)';
  $option->expand = 0;
  $export['acd4df0e-4c49-0cb4-9dc3-ba6ffeb68afe'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ad69117f-92f7-9f74-f935-ee2621d0b0ba';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -91;
  $option->label = 'færøsk';
  $option->value = 'færøsk';
  $option->expand = 0;
  $export['ad69117f-92f7-9f74-f935-ee2621d0b0ba'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ae7cadcc-e547-4934-45be-bf9648aa29db';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -62;
  $option->label = '1976';
  $option->value = '1976';
  $option->expand = 0;
  $export['ae7cadcc-e547-4934-45be-bf9648aa29db'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'af7630be-bda2-7914-d9d9-f901d1b4a687';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -79;
  $option->label = '1993';
  $option->value = '1993';
  $option->expand = 0;
  $export['af7630be-bda2-7914-d9d9-f901d1b4a687'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b27f0d89-b9d6-88c4-69bc-997d9fe48b69';
  $option->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['b27f0d89-b9d6-88c4-69bc-997d9fe48b69'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b4d64985-bc1b-e9f4-c5f1-d35160bc0104';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -1;
  $option->label = '1915';
  $option->value = '1915';
  $option->expand = 0;
  $export['b4d64985-bc1b-e9f4-c5f1-d35160bc0104'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b6f176d8-3b0d-6bf4-1970-2ec8992f746c';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -97;
  $option->label = 'aviser og tidsskrifter';
  $option->value = 'avis OR tidsskrift';
  $option->expand = 0;
  $export['b6f176d8-3b0d-6bf4-1970-2ec8992f746c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b7a6dbd9-3a4d-dea4-a925-90eb9e7e9be8';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -80;
  $option->label = '1994';
  $option->value = '1994';
  $option->expand = 0;
  $export['b7a6dbd9-3a4d-dea4-a925-90eb9e7e9be8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b88d4cbc-51b3-5a94-e139-172c5c424682';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -6;
  $option->label = '1920';
  $option->value = '1920';
  $option->expand = 0;
  $export['b88d4cbc-51b3-5a94-e139-172c5c424682'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b957d000-2cea-54b4-9d0d-e1ea9d8e3428';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -94;
  $option->label = 'koreanske spillefilm';
  $option->value = 'koreansk';
  $option->expand = 0;
  $export['b957d000-2cea-54b4-9d0d-e1ea9d8e3428'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b98f7358-371a-06a4-5d86-eed582941010';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -15;
  $option->label = '1929';
  $option->value = '1929';
  $option->expand = 0;
  $export['b98f7358-371a-06a4-5d86-eed582941010'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b9a58dec-7833-11e4-598a-90fed4ca24ca';
  $option->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $option->sort = -98;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['b9a58dec-7833-11e4-598a-90fed4ca24ca'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bac43df2-a200-49e4-61fc-2643b4b57e36';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -85;
  $option->label = '1999';
  $option->value = '1999';
  $option->expand = 0;
  $export['bac43df2-a200-49e4-61fc-2643b4b57e36'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bc011cb6-4770-25e4-8da8-91cc5ed195c9';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -98;
  $option->label = 'stor skrift ';
  $option->value = 'stor skrift';
  $option->expand = 0;
  $export['bc011cb6-4770-25e4-8da8-91cc5ed195c9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bc94457b-cebe-80b4-0d66-c5f6a9bab85f';
  $option->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $option->sort = -100;
  $option->label = 'Tilladt for alle';
  $option->value = '';
  $option->expand = 0;
  $export['bc94457b-cebe-80b4-0d66-c5f6a9bab85f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bcea0809-8df2-b964-3936-fab8bbbc4f1b';
  $option->v_uuid = '0553e37b-57ef-a194-cd81-d89ee905a94c';
  $option->sort = -98;
  $option->label = 'Voksne';
  $option->value = 'voksne';
  $option->expand = 0;
  $export['bcea0809-8df2-b964-3936-fab8bbbc4f1b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bdc790cf-3864-4364-25e9-6aafa0acee41';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -71;
  $option->label = '1985';
  $option->value = '1985';
  $option->expand = 0;
  $export['bdc790cf-3864-4364-25e9-6aafa0acee41'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'be587e21-c8d3-c364-a912-9de21d1b317a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -38;
  $option->label = '1952';
  $option->value = '1952';
  $option->expand = 0;
  $export['be587e21-c8d3-c364-a912-9de21d1b317a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bedad954-23ec-95c4-61da-01a50b607a07';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -98;
  $option->label = 'playstation 2';
  $option->value = 'playstation 2';
  $option->expand = 0;
  $export['bedad954-23ec-95c4-61da-01a50b607a07'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bf09674b-2cfa-7f64-bddb-69110aa897d4';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -96;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['bf09674b-2cfa-7f64-bddb-69110aa897d4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bf281ba5-4980-cdd4-e575-5eebdb41dc3b';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -41;
  $option->label = '1955';
  $option->value = '1955';
  $option->expand = 0;
  $export['bf281ba5-4980-cdd4-e575-5eebdb41dc3b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bf931e65-a0af-31c4-65c2-9ffe05ac24e9';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -92;
  $option->label = 'Fra 9 år';
  $option->value = 'Fra 9 år';
  $option->expand = 0;
  $export['bf931e65-a0af-31c4-65c2-9ffe05ac24e9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c01826e8-7c2b-3864-2d04-23ccb14ac923';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -95;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['c01826e8-7c2b-3864-2d04-23ccb14ac923'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c04dcd19-9129-2a34-c160-6d9cafe029d3';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -89;
  $option->label = 'polsk';
  $option->value = 'polsk';
  $option->expand = 0;
  $export['c04dcd19-9129-2a34-c160-6d9cafe029d3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c09d6dc5-b8a7-5df4-75fe-b27ffc9d30f1';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -98;
  $option->label = 'musik på nettet';
  $option->value = 'musik (net)';
  $option->expand = 0;
  $export['c09d6dc5-b8a7-5df4-75fe-b27ffc9d30f1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c0c250e7-f805-cef4-c98d-bcd59dadbae4';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -46;
  $option->label = '1960';
  $option->value = '1960';
  $option->expand = 0;
  $export['c0c250e7-f805-cef4-c98d-bcd59dadbae4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c0ddf225-3080-9444-a902-15247c16fe6e';
  $option->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $option->sort = -99;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['c0ddf225-3080-9444-a902-15247c16fe6e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c1a72739-7b4b-32c4-8579-e21eb84f66f8';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 8;
  $option->label = '1906';
  $option->value = '1906';
  $option->expand = 0;
  $export['c1a72739-7b4b-32c4-8579-e21eb84f66f8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c1a9b0a2-b6f8-3634-91e4-ffd306ea9865';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -95;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['c1a9b0a2-b6f8-3634-91e4-ffd306ea9865'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c1f80aea-b7e2-eca4-c549-aae7ca0f0dc0';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -99;
  $option->label = 'spil på nettet';
  $option->value = 'pc-spil (net)';
  $option->expand = 0;
  $export['c1f80aea-b7e2-eca4-c549-aae7ca0f0dc0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c3033cb6-49ed-27a4-f153-1b4aaea1e9f7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -69;
  $option->label = '1983';
  $option->value = '1983';
  $option->expand = 0;
  $export['c3033cb6-49ed-27a4-f153-1b4aaea1e9f7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c3e2be91-7580-53d4-bd65-731441370deb';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -94;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['c3e2be91-7580-53d4-bd65-731441370deb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c4dd06a1-54b2-d954-3dbe-a00a848e512d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -64;
  $option->label = '1978';
  $option->value = '1978';
  $option->expand = 0;
  $export['c4dd06a1-54b2-d954-3dbe-a00a848e512d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c5152876-b458-93a4-4d5a-557048047d80';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -28;
  $option->label = '1942';
  $option->value = '1942';
  $option->expand = 0;
  $export['c5152876-b458-93a4-4d5a-557048047d80'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c549e3d2-3f50-5874-1dd4-a1eefe40a173';
  $option->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $option->sort = -96;
  $option->label = 'video';
  $option->value = 'video';
  $option->expand = 0;
  $export['c549e3d2-3f50-5874-1dd4-a1eefe40a173'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c5c5b505-9d5f-50b4-d5e3-b0893378898c';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -98;
  $option->label = 'tekster på nettet';
  $option->value = 'netdokument';
  $option->expand = 0;
  $export['c5c5b505-9d5f-50b4-d5e3-b0893378898c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c89bccc2-887c-3104-69b2-3c0f3c72133c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -26;
  $option->label = '1940';
  $option->value = '1940';
  $option->expand = 0;
  $export['c89bccc2-887c-3104-69b2-3c0f3c72133c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ca7f0eaf-e470-6d44-55fc-cfdfb530128f';
  $option->v_uuid = 'e3e9565c-3ce4-bba4-6d66-90fd314d06a0';
  $option->sort = -100;
  $option->label = 'noveller';
  $option->value = 'noveller';
  $option->expand = 0;
  $export['ca7f0eaf-e470-6d44-55fc-cfdfb530128f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cabdb8e1-08e9-2dc4-e5b6-88ffb935ab01';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -73;
  $option->label = '1987';
  $option->value = '1987';
  $option->expand = 0;
  $export['cabdb8e1-08e9-2dc4-e5b6-88ffb935ab01'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cabf7321-d79f-b6b4-4118-cb19268491e5';
  $option->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $option->sort = -97;
  $option->label = 'musik på nettet';
  $option->value = 'musik (net)';
  $option->expand = 0;
  $export['cabf7321-d79f-b6b4-4118-cb19268491e5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cb59a4ed-b59d-2d44-89a6-38bbf4753d23';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -84;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['cb59a4ed-b59d-2d44-89a6-38bbf4753d23'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cc253115-7d6f-52e4-39d2-a622b1428b88';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -84;
  $option->label = 'Fra 17 år';
  $option->value = 'Fra 17 år';
  $option->expand = 0;
  $export['cc253115-7d6f-52e4-39d2-a622b1428b88'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cc617f6f-9790-6ec4-bd68-83006b1d98bc';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -91;
  $option->label = 'rollespil';
  $option->value = 'rollespil';
  $option->expand = 0;
  $export['cc617f6f-9790-6ec4-bd68-83006b1d98bc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cc660188-eaf5-d314-b986-0e906a1816d4';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -91;
  $option->label = 'polske spillefilm';
  $option->value = 'poslk';
  $option->expand = 0;
  $export['cc660188-eaf5-d314-b986-0e906a1816d4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ccd63543-2211-7244-5d52-734a6ebbffb2';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -99;
  $option->label = 'trykte bøger';
  $option->value = 'bog';
  $option->expand = 30;
  $export['ccd63543-2211-7244-5d52-734a6ebbffb2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cd58b372-731d-1484-b1af-d89888f0801c';
  $option->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $option->sort = -97;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['cd58b372-731d-1484-b1af-d89888f0801c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cf30a359-e0ec-4d94-b1b1-d01d3ce540c4';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -92;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['cf30a359-e0ec-4d94-b1b1-d01d3ce540c4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd0face97-205a-f494-f13a-6c22aeee659c';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -95;
  $option->label = 'kinesiske spillefilm';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['d0face97-205a-f494-f13a-6c22aeee659c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd1d4e34d-fd42-13c4-05f7-1d55711193ae';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -81;
  $option->label = 'portugisisk';
  $option->value = 'portugisisk';
  $option->expand = 0;
  $export['d1d4e34d-fd42-13c4-05f7-1d55711193ae'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd24052c2-b4ae-ccc4-85fb-a9dda4d8c8e5';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -89;
  $option->label = 'serbiske spillefilm';
  $option->value = 'serbisk';
  $option->expand = 0;
  $export['d24052c2-b4ae-ccc4-85fb-a9dda4d8c8e5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd3601935-58d7-7f84-796a-21cffadc9405';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -83;
  $option->label = 'Fra 18 år';
  $option->value = 'Fra 18 år';
  $option->expand = 0;
  $export['d3601935-58d7-7f84-796a-21cffadc9405'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd6791d0e-192a-2144-f9dd-89e37dfd96cc';
  $option->v_uuid = '0553e37b-57ef-a194-cd81-d89ee905a94c';
  $option->sort = -99;
  $option->label = 'Børn';
  $option->value = 'børn';
  $option->expand = 0;
  $export['d6791d0e-192a-2144-f9dd-89e37dfd96cc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd6f47e6c-9549-10a4-8da4-be6479d735a0';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -85;
  $option->label = 'tyske spillefilm';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['d6f47e6c-9549-10a4-8da4-be6479d735a0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd7240d3f-e248-3754-cd97-87e8e17308bc';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -95;
  $option->label = 'e-bøger';
  $option->value = 'ebog';
  $option->expand = 0;
  $export['d7240d3f-e248-3754-cd97-87e8e17308bc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd8dfc622-1421-40f4-7984-58a4ddd4e0c7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -99;
  $option->label = '2013';
  $option->value = '2013';
  $option->expand = 0;
  $export['d8dfc622-1421-40f4-7984-58a4ddd4e0c7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd8e2149b-b447-f694-6144-4a8f712ce252';
  $option->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $option->sort = -100;
  $option->label = 'Americana';
  $option->value = '';
  $option->expand = 0;
  $export['d8e2149b-b447-f694-6144-4a8f712ce252'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd9481271-8609-9644-3d9d-f5257f34483d';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -71;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['d9481271-8609-9644-3d9d-f5257f34483d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd9514c74-36a3-e404-49df-686dae739f49';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -82;
  $option->label = 'noder';
  $option->value = 'node';
  $option->expand = 0;
  $export['d9514c74-36a3-e404-49df-686dae739f49'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd9ff5186-9a14-6584-5dc8-c2dc7cbb992f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 1;
  $option->label = '1913';
  $option->value = '1913';
  $option->expand = 0;
  $export['d9ff5186-9a14-6584-5dc8-c2dc7cbb992f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'db3fff66-b1c5-e5d4-b5bd-bf6dd55a7f93';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -85;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['db3fff66-b1c5-e5d4-b5bd-bf6dd55a7f93'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'dbe618cd-9c11-f0b4-3187-ba5a13953089';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -75;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['dbe618cd-9c11-f0b4-3187-ba5a13953089'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'dc25069a-73dd-6584-e12d-c896cb57518f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 11;
  $option->label = '1903';
  $option->value = '1903';
  $option->expand = 0;
  $export['dc25069a-73dd-6584-e12d-c896cb57518f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'dc999656-0a1c-09b4-2d6a-cca5d2dbc082';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -21;
  $option->label = '1935';
  $option->value = '1935';
  $option->expand = 0;
  $export['dc999656-0a1c-09b4-2d6a-cca5d2dbc082'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'de090d31-5c41-bbb4-95e1-9fd05d6aa6a2';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -91;
  $option->label = '2005';
  $option->value = '2005';
  $option->expand = 0;
  $export['de090d31-5c41-bbb4-95e1-9fd05d6aa6a2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'de8ca52b-a11b-8c14-5d8e-c0c63c23447d';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 13;
  $option->label = '1901';
  $option->value = '1901';
  $option->expand = 0;
  $export['de8ca52b-a11b-8c14-5d8e-c0c63c23447d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'dedb8c38-43ed-a914-f1fa-dc0d10bfefdd';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -81;
  $option->label = 'urdu';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['dedb8c38-43ed-a914-f1fa-dc0d10bfefdd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'dfb953b0-be1a-0064-51f1-ed5c9343051d';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -99;
  $option->label = 'Fra 2 år';
  $option->value = 'Fra 2 år';
  $option->expand = 0;
  $export['dfb953b0-be1a-0064-51f1-ed5c9343051d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e07fe7de-9e45-1174-5d93-8a7f60a74eed';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -92;
  $option->label = 'xbox 360';
  $option->value = 'xbox 360';
  $option->expand = 0;
  $export['e07fe7de-9e45-1174-5d93-8a7f60a74eed'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e19298ca-6d1f-c1f4-e1ae-1c8f6dd81152';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -24;
  $option->label = '1938';
  $option->value = '1938';
  $option->expand = 0;
  $export['e19298ca-6d1f-c1f4-e1ae-1c8f6dd81152'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e21f8546-4ffa-9c64-c12d-074913a6aa66';
  $option->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $option->sort = -98;
  $option->label = 'Krimi';
  $option->value = 'krimi';
  $option->expand = 0;
  $export['e21f8546-4ffa-9c64-c12d-074913a6aa66'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e3912f25-61ea-fec4-b5d1-f250a02aa3c1';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -94;
  $option->label = 'minispil';
  $option->value = 'minispil';
  $option->expand = 0;
  $export['e3912f25-61ea-fec4-b5d1-f250a02aa3c1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e431cf19-cb2a-b844-b1df-1c09ceb44eb3';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -100;
  $option->label = 'Alle typer materiale';
  $option->value = '';
  $option->expand = 0;
  $export['e431cf19-cb2a-b844-b1df-1c09ceb44eb3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e4934988-545a-7d84-a16b-6589708f27dc';
  $option->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $option->sort = 10;
  $option->label = 'År før';
  $option->value = 'year_lt';
  $option->expand = 0;
  $export['e4934988-545a-7d84-a16b-6589708f27dc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e5ca4ca0-753f-60d4-59f2-838677c02df7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -94;
  $option->label = '2008';
  $option->value = '2008';
  $option->expand = 0;
  $export['e5ca4ca0-753f-60d4-59f2-838677c02df7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e6788045-e16d-a474-e5ee-704a7abf3707';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -93;
  $option->label = 'Fra 8 år';
  $option->value = 'Fra 8 år';
  $option->expand = 0;
  $export['e6788045-e16d-a474-e5ee-704a7abf3707'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e6e8d048-d2c0-0ec4-c162-42a32c10a16f';
  $option->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $option->sort = -99;
  $option->label = 'Country';
  $option->value = '';
  $option->expand = 0;
  $export['e6e8d048-d2c0-0ec4-c162-42a32c10a16f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e85d114d-15ab-42d4-3587-47f483da290c';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = 2;
  $option->label = '1912';
  $option->value = '1912';
  $option->expand = 0;
  $export['e85d114d-15ab-42d4-3587-47f483da290c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ea55a48b-4752-43c4-55bd-b41c4a01f723';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -98;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['ea55a48b-4752-43c4-55bd-b41c4a01f723'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ead05c46-ec79-5474-5944-b01a0c4220f5';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -58;
  $option->label = '1972';
  $option->value = '1972';
  $option->expand = 0;
  $export['ead05c46-ec79-5474-5944-b01a0c4220f5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'eb0c986d-df1b-3234-f5fa-75ce84e0f935';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -92;
  $option->label = 'pakistanske (urdu) spillefilm';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['eb0c986d-df1b-3234-f5fa-75ce84e0f935'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'eb5b623d-431f-4324-a9f0-d3debf3228ff';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -98;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['eb5b623d-431f-4324-a9f0-d3debf3228ff'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ec70f66b-207e-9054-99b6-7f911f0795d7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -50;
  $option->label = '1964';
  $option->value = '1964';
  $option->expand = 0;
  $export['ec70f66b-207e-9054-99b6-7f911f0795d7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ecddd81a-2d99-bb24-cdc8-53697d7063ce';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -89;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['ecddd81a-2d99-bb24-cdc8-53697d7063ce'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ed44e0f6-5638-7814-6d56-8e0954393184';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -11;
  $option->label = '1925';
  $option->value = '1925';
  $option->expand = 0;
  $export['ed44e0f6-5638-7814-6d56-8e0954393184'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'edb19d06-aa57-cd24-ad2d-63ffa9b51253';
  $option->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $option->sort = -95;
  $option->label = 'spil på nettet';
  $option->value = 'pc-spil (net)';
  $option->expand = 0;
  $export['edb19d06-aa57-cd24-ad2d-63ffa9b51253'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ef2fb86d-338d-3a44-6d25-690847469371';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -65;
  $option->label = '1979';
  $option->value = '1979';
  $option->expand = 0;
  $export['ef2fb86d-338d-3a44-6d25-690847469371'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ef883725-f311-f684-a1d7-d23a3895339e';
  $option->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $option->sort = -91;
  $option->label = 'kinesisk';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['ef883725-f311-f684-a1d7-d23a3895339e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'eff9e062-a762-02b4-b596-6bcf6ad9f43d';
  $option->v_uuid = 'e3e9565c-3ce4-bba4-6d66-90fd314d06a0';
  $option->sort = -97;
  $option->label = 'digte';
  $option->value = 'digte';
  $option->expand = 0;
  $export['eff9e062-a762-02b4-b596-6bcf6ad9f43d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f08d148e-c9f9-25e4-3507-2227850a9b65';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -42;
  $option->label = '1956';
  $option->value = '1956';
  $option->expand = 0;
  $export['f08d148e-c9f9-25e4-3507-2227850a9b65'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f0a8073b-3611-2504-19e7-26d55e8b5079';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -93;
  $option->label = 'net (alle typer)';
  $option->value = 'netdokument';
  $option->expand = 0;
  $export['f0a8073b-3611-2504-19e7-26d55e8b5079'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f0cfd257-db96-6124-dd06-3f9d937436a3';
  $option->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $option->sort = 10;
  $option->label = 'År efter';
  $option->value = 'year_gt';
  $option->expand = 0;
  $export['f0cfd257-db96-6124-dd06-3f9d937436a3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f17d9411-5fc2-b2e4-296b-6b5e46ec3fc2';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -97;
  $option->label = 'bulgarsk';
  $option->value = 'bulgarsk';
  $option->expand = 0;
  $export['f17d9411-5fc2-b2e4-296b-6b5e46ec3fc2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f39bd0f7-ef8c-d5f4-99d9-f8f045fb454e';
  $option->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $option->sort = -97;
  $option->label = 'lydbøger';
  $option->value = 'lydbog';
  $option->expand = 31;
  $export['f39bd0f7-ef8c-d5f4-99d9-f8f045fb454e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f3c6fafc-995f-8814-a5e9-ba72f1b82c7a';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -83;
  $option->label = '1997';
  $option->value = '1997';
  $option->expand = 0;
  $export['f3c6fafc-995f-8814-a5e9-ba72f1b82c7a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f43b3fc6-bb1c-52e4-c902-a2d69dd3583b';
  $option->v_uuid = '0553e37b-57ef-a194-cd81-d89ee905a94c';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = 'alle';
  $option->expand = 0;
  $export['f43b3fc6-bb1c-52e4-c902-a2d69dd3583b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f4a65f49-3a43-7fc4-69c1-28f374e0bc57';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -96;
  $option->label = 'Fra 5 år';
  $option->value = 'Fra 5 år';
  $option->expand = 0;
  $export['f4a65f49-3a43-7fc4-69c1-28f374e0bc57'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f4feac88-4f0a-8084-0151-37a47b1c8eac';
  $option->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $option->sort = -95;
  $option->label = 'leg og lær';
  $option->value = '(leg og lær eller leg)';
  $option->expand = 0;
  $export['f4feac88-4f0a-8084-0151-37a47b1c8eac'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f58f772c-87f4-f2a4-5924-b6d18a7fc901';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -88;
  $option->label = 'hollandsk';
  $option->value = 'hollandsk';
  $option->expand = 0;
  $export['f58f772c-87f4-f2a4-5924-b6d18a7fc901'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f592b7a6-6cac-0974-9530-a365a3dc5b4a';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -86;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['f592b7a6-6cac-0974-9530-a365a3dc5b4a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f63d6618-4e16-8ab4-8501-839acd216efa';
  $option->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $option->sort = -84;
  $option->label = 'musik (alle typer)';
  $option->value = 'musik';
  $option->expand = 0;
  $export['f63d6618-4e16-8ab4-8501-839acd216efa'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f7d1631c-2c3c-f534-f56f-9e0f392d6404';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -77;
  $option->label = 'somali';
  $option->value = 'somali';
  $option->expand = 0;
  $export['f7d1631c-2c3c-f534-f56f-9e0f392d6404'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f7da8e3e-972a-b3d4-8d4f-9f529f317ec7';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -10;
  $option->label = '1924';
  $option->value = '1924';
  $option->expand = 0;
  $export['f7da8e3e-972a-b3d4-8d4f-9f529f317ec7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f82b6001-ebd8-43f4-3138-32ef1691f99d';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -87;
  $option->label = 'svenske spillefilm';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['f82b6001-ebd8-43f4-3138-32ef1691f99d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f8a939e4-1890-7b64-e9b8-6d4051442146';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -93;
  $option->label = '2007';
  $option->value = '2007';
  $option->expand = 0;
  $export['f8a939e4-1890-7b64-e9b8-6d4051442146'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f8fa69b6-b43c-67e4-a5ab-f4bce045d0f5';
  $option->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $option->sort = 10;
  $option->label = 'År lig med';
  $option->value = 'year_eq';
  $option->expand = 0;
  $export['f8fa69b6-b43c-67e4-a5ab-f4bce045d0f5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f9f0f606-1b31-3ef4-4dcf-670cf0af35ce';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -45;
  $option->label = '1959';
  $option->value = '1959';
  $option->expand = 0;
  $export['f9f0f606-1b31-3ef4-4dcf-670cf0af35ce'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fa20423d-7c4f-9fe4-2592-c137ee7fce8c';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -87;
  $option->label = 'islandsk';
  $option->value = 'islandsk';
  $option->expand = 0;
  $export['fa20423d-7c4f-9fe4-2592-c137ee7fce8c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fa37a4c7-ef4b-2d84-097a-4736e4671492';
  $option->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $option->sort = -88;
  $option->label = 'Fra 13 år';
  $option->value = 'Fra 13 år';
  $option->expand = 0;
  $export['fa37a4c7-ef4b-2d84-097a-4736e4671492'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'faef87b9-a542-8354-a1bf-a97303afff07';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -78;
  $option->label = '1992';
  $option->value = '1992';
  $option->expand = 0;
  $export['faef87b9-a542-8354-a1bf-a97303afff07'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fb68642e-4d15-a684-c548-1fac8f792b96';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -29;
  $option->label = '1943';
  $option->value = '1943';
  $option->expand = 0;
  $export['fb68642e-4d15-a684-c548-1fac8f792b96'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fbb67ead-4848-1334-a944-36bb589ad4d6';
  $option->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $option->sort = -88;
  $option->label = 'spanske og latinamerikanske spillefilm';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['fbb67ead-4848-1334-a944-36bb589ad4d6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fc7d84ae-a552-23e4-a13c-f98796caa692';
  $option->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $option->sort = -89;
  $option->label = 'hebræisk';
  $option->value = 'hebræisk';
  $option->expand = 0;
  $export['fc7d84ae-a552-23e4-a13c-f98796caa692'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fd08ae46-539e-2704-3965-d821930006bd';
  $option->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $option->sort = -91;
  $option->label = 'Fra 10 år';
  $option->value = 'Fra 10 år';
  $option->expand = 0;
  $export['fd08ae46-539e-2704-3965-d821930006bd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fe195637-9fed-a384-69d2-13ae0c0ebace';
  $option->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $option->sort = -97;
  $option->label = 'finsk';
  $option->value = 'finsk';
  $option->expand = 0;
  $export['fe195637-9fed-a384-69d2-13ae0c0ebace'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fe646ceb-fda3-ca04-717d-469562c09c3f';
  $option->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $option->sort = -14;
  $option->label = '1928';
  $option->value = '1928';
  $option->expand = 0;
  $export['fe646ceb-fda3-ca04-717d-469562c09c3f'] = $option;

  return $export;
}

/**
 * Implements hook_default_bibdk_custom_search_value().
 */
function bibdk_custom_search_feature_default_bibdk_custom_search_value() {
  $export = array();

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '0195f7a7-e884-2154-4db8-12c17a96e30e';
  $value->value_title = 'film, bibliotekets anbefaling';
  $value->sort = -73;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['0195f7a7-e884-2154-4db8-12c17a96e30e'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '0553e37b-57ef-a194-cd81-d89ee905a94c';
  $value->value_title = 'bøger, målgruppe';
  $value->sort = -87;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.category';
  $value->default_value = '';
  $value->expand = 0;
  $export['0553e37b-57ef-a194-cd81-d89ee905a94c'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '0b61b366-ac92-ec04-39e6-6c58c355c9b0';
  $value->value_title = 'musik, alle ophav1';
  $value->sort = -70;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['0b61b366-ac92-ec04-39e6-6c58c355c9b0'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1035e851-4790-a5b4-dd1b-f5da9050d165';
  $value->value_title = 'alle materialer, sprog';
  $value->sort = -93;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['1035e851-4790-a5b4-dd1b-f5da9050d165'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1b033108-51eb-9f04-497b-ed506bda3610';
  $value->value_title = 'musikgenrer';
  $value->sort = -66;
  $value->value_type = 'checkboxes';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['1b033108-51eb-9f04-497b-ed506bda3610'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1e3eff5a-4288-57a4-81dc-e52dafc160e1';
  $value->value_title = 'bøger, litterær form';
  $value->sort = -89;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.literaryForm';
  $value->default_value = '';
  $value->expand = 0;
  $export['1e3eff5a-4288-57a4-81dc-e52dafc160e1'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1ecd1156-7598-bfb4-2de5-09af2e71e738';
  $value->value_title = 'film, personer';
  $value->sort = -77;
  $value->value_type = 'textfield';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['1ecd1156-7598-bfb4-2de5-09af2e71e738'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '325cc385-637a-63d4-693b-6a8b9cdb8519';
  $value->value_title = 'bøger, trykte';
  $value->sort = -91;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['325cc385-637a-63d4-693b-6a8b9cdb8519'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '37553c44-91b9-9574-a174-908c558b3441';
  $value->value_title = 'spil, platforme';
  $value->sort = -81;
  $value->value_type = 'select';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['37553c44-91b9-9574-a174-908c558b3441'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '4645489e-fc53-ba44-a91e-a9fc34dbbbc9';
  $value->value_title = 'alle materialer, materialetyper alle';
  $value->sort = -94;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['4645489e-fc53-ba44-a91e-a9fc34dbbbc9'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '4c8ef8ae-7561-7424-b989-3c26dc76c8be';
  $value->value_title = 'artikler, tidsskrift eller avis';
  $value->sort = -84;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.vp';
  $value->default_value = '';
  $value->expand = 0;
  $export['4c8ef8ae-7561-7424-b989-3c26dc76c8be'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '4e426688-35dd-4ab4-699d-e8e3ffd6ce6c';
  $value->value_title = 'musikophav';
  $value->sort = -71;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.pe';
  $value->default_value = '';
  $value->expand = 0;
  $export['4e426688-35dd-4ab4-699d-e8e3ffd6ce6c'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '4f0662cc-77fd-a994-795b-15156ba0ef34';
  $value->value_title = 'artikler, materialetyper';
  $value->sort = -85;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['4f0662cc-77fd-a994-795b-15156ba0ef34'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '4f816bdc-6230-4844-41e7-6498c09e267d';
  $value->value_title = 'film, genre';
  $value->sort = -76;
  $value->value_type = 'checkboxes';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['4f816bdc-6230-4844-41e7-6498c09e267d'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '53939411-9451-51b4-b517-7c71703d90a5';
  $value->value_title = 'fritekst';
  $value->sort = -100;
  $value->value_type = 'textfield';
  $value->search_code = 'term.default';
  $value->default_value = '';
  $value->expand = 0;
  $export['53939411-9451-51b4-b517-7c71703d90a5'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '595cb75c-082c-4d74-f9f9-258957c66d55';
  $value->value_title = 'år, årstal';
  $value->sort = -95;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['595cb75c-082c-4d74-f9f9-258957c66d55'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '5ae0e50c-3fbd-ad64-6da2-0b0961e4489b';
  $value->value_title = 'film, materialetype';
  $value->sort = -74;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['5ae0e50c-3fbd-ad64-6da2-0b0961e4489b'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '5b12d524-01af-6de4-d569-2d53ce6c0f2e';
  $value->value_title = 'spil, bibliotekets aldersanbefaling';
  $value->sort = -79;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['5b12d524-01af-6de4-d569-2d53ce6c0f2e'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '5c19953e-db52-93c4-9dcc-c0c23eb805e9';
  $value->value_title = 'spil, genre';
  $value->sort = -80;
  $value->value_type = 'checkboxes';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['5c19953e-db52-93c4-9dcc-c0c23eb805e9'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '5d7ce530-e7b7-a464-1940-179142220811';
  $value->value_title = 'titel';
  $value->sort = -98;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.ti';
  $value->default_value = '';
  $value->expand = 0;
  $export['5d7ce530-e7b7-a464-1940-179142220811'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '5d9469da-9b78-e5f4-b54b-40556fd5f5b0';
  $value->value_title = 'bøger, materialetyper';
  $value->sort = -92;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['5d9469da-9b78-e5f4-b54b-40556fd5f5b0'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '76d3e53c-8f50-6c04-2569-f4eb18180b56';
  $value->value_title = 'film, tilladt for';
  $value->sort = -72;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['76d3e53c-8f50-6c04-2569-f4eb18180b56'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '802e059d-b454-53a4-11a5-aa541e8708f6';
  $value->value_title = 'spil, medierådets aldersanbefaling';
  $value->sort = -78;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['802e059d-b454-53a4-11a5-aa541e8708f6'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '89423fd2-8b28-cf64-1958-81b8fea71570';
  $value->value_title = 'emne';
  $value->sort = -97;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.em';
  $value->default_value = '';
  $value->expand = 0;
  $export['89423fd2-8b28-cf64-1958-81b8fea71570'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '8b9faa48-6f6d-5954-cd84-024980686c47';
  $value->value_title = 'net, materialetyper';
  $value->sort = -82;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['8b9faa48-6f6d-5954-cd84-024980686c47'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '90e1ced5-fe3c-7a84-ad33-6d02bfe23847';
  $value->value_title = 'musik, alle titler';
  $value->sort = -68;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.ti';
  $value->default_value = '';
  $value->expand = 0;
  $export['90e1ced5-fe3c-7a84-ad33-6d02bfe23847'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '9aee7acb-04eb-0d44-9504-c2d1a81397c8';
  $value->value_title = 'ophav';
  $value->sort = -99;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['9aee7acb-04eb-0d44-9504-c2d1a81397c8'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '9d03148c-ef3f-f404-0ddd-34b7bcbb03b4';
  $value->value_title = 'musik, alle ophav2';
  $value->sort = -69;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['9d03148c-ef3f-f404-0ddd-34b7bcbb03b4'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'a9dcf90c-87fc-3ff4-d977-2cc6ec8b29c7';
  $value->value_title = 'musik, albumtitel';
  $value->sort = -67;
  $value->value_type = 'textfield';
  $value->search_code = 'dkcclterm.ht';
  $value->default_value = '';
  $value->expand = 0;
  $export['a9dcf90c-87fc-3ff4-d977-2cc6ec8b29c7'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'b7f1815e-8686-5794-1526-2465935c4e49';
  $value->value_title = 'artikler og net, sprog';
  $value->sort = -83;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['b7f1815e-8686-5794-1526-2465935c4e49'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'c81bc63b-60d4-a614-e951-1e4151a5f7dd';
  $value->value_title = 'film, nationalitet';
  $value->sort = -75;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.nationality';
  $value->default_value = '';
  $value->expand = 0;
  $export['c81bc63b-60d4-a614-e951-1e4151a5f7dd'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'dd18e670-8c1b-b154-4da8-3101c6a5101d';
  $value->value_title = 'år, operator';
  $value->sort = -96;
  $value->value_type = 'select';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['dd18e670-8c1b-b154-4da8-3101c6a5101d'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'e3e9565c-3ce4-bba4-6d66-90fd314d06a0';
  $value->value_title = 'bøger, materialetype skønlitteratur';
  $value->sort = -88;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['e3e9565c-3ce4-bba4-6d66-90fd314d06a0'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'e684a345-f350-b6b4-ed2a-c495cf58999a';
  $value->value_title = 'bøger, lydbøger';
  $value->sort = -90;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['e684a345-f350-b6b4-ed2a-c495cf58999a'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'f7e91291-4268-f8a4-d13b-e04f370efe06';
  $value->value_title = 'bøger, sprog';
  $value->sort = -86;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['f7e91291-4268-f8a4-d13b-e04f370efe06'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'ff43f1b1-a731-8764-25aa-d925230ba34b';
  $value->value_title = 'musik, materialetyper';
  $value->sort = -65;
  $value->value_type = 'checkboxes';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['ff43f1b1-a731-8764-25aa-d925230ba34b'] = $value;

  return $export;
}
