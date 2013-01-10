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
  $search_page->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $search_page->page_title = 'Bøger';
  $search_page->page_path = 'bibdk_frontpage/bog';
  $search_page->menu_title = 'Bøger';
  $search_page->delimiter = 'term.workType=literature';
  $search_page->expand = TRUE;
  $search_page->sort = -9;
  $export['42a952b5-c6da-7254-5de1-c5242178d79a'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $search_page->page_title = 'Alle materialer';
  $search_page->page_path = 'bibdk_frontpage';
  $search_page->menu_title = 'Alle materialer';
  $search_page->delimiter = '';
  $search_page->expand = TRUE;
  $search_page->sort = -10;
  $export['4538c317-0ad1-5fe4-7124-74e163d705bb'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $search_page->page_title = 'Artikler';
  $search_page->page_path = 'bibdk_frontpage/artikel';
  $search_page->menu_title = 'Artikler';
  $search_page->delimiter = 'term.workType=article';
  $search_page->expand = TRUE;
  $search_page->sort = -8;
  $export['8edd9197-ecff-02a4-99b0-e9e910bd4c39'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $search_page->page_title = 'Musik';
  $search_page->page_path = 'bibdk_frontpage/musik';
  $search_page->menu_title = 'Musik';
  $search_page->delimiter = 'term.workType=music';
  $search_page->expand = TRUE;
  $search_page->sort = -4;
  $export['b7101e61-40af-fff4-e1fe-da7ee7ac5aad'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $search_page->page_title = 'Film';
  $search_page->page_path = 'bibdk_frontpage/film';
  $search_page->menu_title = 'Film';
  $search_page->delimiter = 'term.workType=movie';
  $search_page->expand = TRUE;
  $search_page->sort = -7;
  $export['e63ad1dc-e807-0834-01c9-c30fe97b37da'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $search_page->page_title = 'På nettet';
  $search_page->page_path = 'bibdk_frontpage/net';
  $search_page->menu_title = 'På nettet';
  $search_page->delimiter = 'term.workType=online';
  $search_page->expand = FALSE;
  $search_page->sort = -6;
  $export['f9d3db9c-ebb3-fc24-b99c-c7823b1369dd'] = $search_page;

  $search_page = new stdClass();
  $search_page->disabled = FALSE; /* Edit this to true to make a default search_page disabled initially */
  $search_page->api_version = 1;
  $search_page->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $search_page->page_title = 'Spil';
  $search_page->page_path = 'bibdk_frontpage/spil';
  $search_page->menu_title = 'Spil';
  $search_page->delimiter = 'term.workType=game';
  $search_page->expand = FALSE;
  $search_page->sort = -5;
  $export['fafcfc40-1c17-4364-c522-4ee5256fea28'] = $search_page;

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
  $element->e_uuid = '0dba9809-7566-e0d4-153c-c0330caa7bfb';
  $element->element_title = 'film_titel';
  $element->element_label = 'Filmens titel';
  $element->description = 'fx jernladyen';
  $element->help_text = 'Her kan du søge på filmens titel - skriv et eller flere ord fra filmens titel.
Ex lost fire
';
  $element->sort = -68;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['0dba9809-7566-e0d4-153c-c0330caa7bfb'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '1c48b036-3823-0d34-e955-dc71795f8875';
  $element->element_title = 'emne';
  $element->element_label = 'Emne';
  $element->description = 'fx tsnuami';
  $element->help_text = 'Søg emne:
Skriv dit emne eller starten på det ord du søger noget om - skriver du flere ord kombinerer systemet automatisk med - og - mellem ordene.
';
  $element->sort = -98;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['1c48b036-3823-0d34-e955-dc71795f8875'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '1cea7299-c8d3-f924-dd7c-3eafb5fae5c3';
  $element->element_title = 'bog_forfatter';
  $element->element_label = 'Forfatter';
  $element->description = 'fx fossum';
  $element->help_text = 'Skriv den eller de dele af navnet, du er sikker på.
Kombiner evt. med et ord fra titlen - det skal skrives i titelboksen.
Senere kan du evt. bruge Flere søgemuligheder.';
  $element->sort = -94;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['1cea7299-c8d3-f924-dd7c-3eafb5fae5c3'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '21423571-5991-63d4-1560-4324314c9ebb';
  $element->element_title = 'bog_emne';
  $element->element_label = 'Emne';
  $element->description = 'fx sejlsport';
  $element->help_text = 'Søg emne:
Skriv dit emne eller starten på det ord du søger noget om - skriver du flere ord kombinerer systemet med og.
Senere kan du evt. bruge Flere søgemuligheder.';
  $element->sort = -92;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['21423571-5991-63d4-1560-4324314c9ebb'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '2416c8be-cf54-86d4-315f-2b9ef50a3d2f';
  $element->element_title = 'film_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: nordkorea';
  $element->help_text = 'Her kan du søge på ord et eller andet sted i posten. Fx titlen, medvirkende eller et kort handlingsreferat. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
tryllekunst*';
  $element->sort = -65;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['2416c8be-cf54-86d4-315f-2b9ef50a3d2f'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '242f0da9-dc5c-a1a4-19e5-82c59d16abf4';
  $element->element_title = 'bog_form';
  $element->element_label = 'Litterær form';
  $element->description = 'fx faglitteratur';
  $element->help_text = 'Her kan du vælge om materialet skal være Fag- eller skønlitteratur. Ikke alle materiale er markeret om de er fag- eller skønlitteratur.';
  $element->sort = -87;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['242f0da9-dc5c-a1a4-19e5-82c59d16abf4'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '24acfbd6-0ea0-43a4-398b-438d3300aab2';
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
  $export['24acfbd6-0ea0-43a4-398b-438d3300aab2'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '29de65a3-5047-e7e4-3dad-3daf07984c31';
  $element->element_title = 'sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx spansk';
  $element->help_text = 'Vælg et sprog';
  $element->sort = -53;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['29de65a3-5047-e7e4-3dad-3daf07984c31'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '2e4dc5d5-48a9-1d54-b1a1-445dc1eb087c';
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
  $export['2e4dc5d5-48a9-1d54-b1a1-445dc1eb087c'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '38002688-6b4c-8234-5dfb-9f6c381192c8';
  $element->element_title = 'musik_albumtitel';
  $element->element_label = 'Albumtitel';
  $element->description = 'fx: planet earth';
  $element->help_text = 'Albumtitel: her får du kun poster hvor dit søgeord står i navnet på albummet (cd, båndet, pladen, netmusik, videoen eller dvden).';
  $element->sort = -57;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['38002688-6b4c-8234-5dfb-9f6c381192c8'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '3cfb5dcf-864d-c4e4-6d13-5a26578d5dff';
  $element->element_title = 'spil_genre';
  $element->element_label = 'Spilgenre, type';
  $element->description = 'fx actionspil';
  $element->help_text = 'Klik på Vælg genre og vælg fra genrerne. Ikke alle spil har en genrebetegnelse.';
  $element->sort = -71;
  $element->tab_index = 0;
  $element->access_key = 's';
  $export['3cfb5dcf-864d-c4e4-6d13-5a26578d5dff'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '3d8ddeb5-872e-3784-d5b8-d3730b8d5d15';
  $element->element_title = 'artikel_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx avisartikler';
  $element->help_text = 'Vælg på rullemenuen hvis du ikke ønsker Alle artikler.
Ønsker du helt andre materialer: Brug Almindelig søgning';
  $element->sort = -81;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['3d8ddeb5-872e-3784-d5b8-d3730b8d5d15'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '3e16c99f-e86c-d224-fd20-969102db08e8';
  $element->element_title = 'artikel_titelord';
  $element->element_label = 'Artikel titelord';
  $element->description = 'fx credo';
  $element->help_text = 'Skriv et eller flere ord fra titlen.
Hvis du skriver flere ord, kombinerer systemet dem med og.';
  $element->sort = -84;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['3e16c99f-e86c-d224-fd20-969102db08e8'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '403b88cf-573a-2274-b902-e4281151eafe';
  $element->element_title = 'spil_bibliotekets_aldersanbefaling';
  $element->element_label = 'Aldersanbefaling';
  $element->description = 'Biblioteket anbefaler';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe biblioteket mener spillet er egnet til.';
  $element->sort = -70;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['403b88cf-573a-2274-b902-e4281151eafe'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '4328722b-c325-77a4-5595-61fe52c3e977';
  $element->element_title = 'musik_materialer';
  $element->element_label = 'Materiale';
  $element->description = 'fx cd musik';
  $element->help_text = 'Sæt tjekmærke ved et eller flere materialer, hvis du kun ønsker disse.';
  $element->sort = -54;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['4328722b-c325-77a4-5595-61fe52c3e977'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '4a65567f-8537-c2f4-798d-b4e3412e7631';
  $element->element_title = 'spil_medierådets_aldersanbefaling';
  $element->element_label = 'Medierådets aldersanbefalinger';
  $element->description = 'PEGI aldersmærkning';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe Medierådet vurderer spillets indhold er passende for.
PEGI mærkningen fortæller ikke hvor svært spillet er, men om det kan være skræmmende.
Læs mere om PEGI-afmærkning. link';
  $element->sort = -69;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['4a65567f-8537-c2f4-798d-b4e3412e7631'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '55310980-6664-ff84-39af-1640ea9d4f5c';
  $element->element_title = 'film_nationalitet';
  $element->element_label = 'Nationalitet';
  $element->description = 'fx japanske spillefilm';
  $element->help_text = 'Her er mulighed for at få et udvalg af spillefilm fra nogle lande.
Du finder ikke alle film fra de nævnte lande.';
  $element->sort = -64;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['55310980-6664-ff84-39af-1640ea9d4f5c'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '57b33f4f-336f-f784-710a-4964351e9040';
  $element->element_title = 'net_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: klimakonference?';
  $element->help_text = 'Her søger du i de fleste oplysninger i posterne
Du kan sætte en * - når du er i tvivl
Du skal ikke skrive &#039;og&#039; mellem ordene.';
  $element->sort = -77;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['57b33f4f-336f-f784-710a-4964351e9040'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '5afd8391-90e0-8e54-c1af-36a8b95fa0e7';
  $element->element_title = 'film_tilladt_for';
  $element->element_label = 'Tilladt for';
  $element->description = 'Tilladt for';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe en film er tilladt for.';
  $element->sort = -61;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['5afd8391-90e0-8e54-c1af-36a8b95fa0e7'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '61133aa9-e0af-04c4-8d7c-4ac1bd4c7d82';
  $element->element_title = 'bog_materialer';
  $element->element_label = 'Materialetype';
  $element->description = 'fx trykte bøger';
  $element->help_text = 'Vælg et andet materiale hvis du ikke kun ønsker Trykte bøger. Ønsker du helt andre materialer: Brug søgning Alle materialer.
E-bøger kan ikke kombineres med Litterær form eller Målgruppe.';
  $element->sort = -90;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['61133aa9-e0af-04c4-8d7c-4ac1bd4c7d82'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '664dcf79-3e0a-7ba4-89f9-b5579b16d8a5';
  $element->element_title = 'bog_målgruppe';
  $element->element_label = 'Målgruppe';
  $element->description = 'fx voksne';
  $element->help_text = 'Her kan du vælge om materialet skal være for alle eller for børn eller for voksne. Ikke alle materialer er markeret om de er beregnet for børn eller voksne.';
  $element->sort = -88;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['664dcf79-3e0a-7ba4-89f9-b5579b16d8a5'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '67855bf4-3e7d-fd84-cdc3-b8103f4ff3fb';
  $element->element_title = 'musik_hovedophav';
  $element->element_label = 'Hovedkunstner, -komponist, -gruppe';
  $element->description = 'fx: medina';
  $element->help_text = 'Brug Hovedkunstner, hvis du får alt for mange fund ved at bruge Medvirkende.
Her finder du kun det som vedkommende er hovedansvarlig for - fx kun Medinas egne plader - og ikke alle dem hvor hun (eller en anden med samme navn blot bidrager.';
  $element->sort = -59;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['67855bf4-3e7d-fd84-cdc3-b8103f4ff3fb'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '6c8926b2-1f16-7cd4-b951-f0174d73d165';
  $element->element_title = 'musik_titler_alle';
  $element->element_label = 'Alle titler';
  $element->description = 'fx: stille før storm';
  $element->help_text = 'Alle titler kan bruges til ord fra alle slags titler - både hele cder og enkelte numre. Får du alt for mange resultater ved brug af Alle titler, kan du bruge Albumtitel på cd eller kombinere med en kunstner eller komponist.';
  $element->sort = -58;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['6c8926b2-1f16-7cd4-b951-f0174d73d165'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '710bc480-6c2c-8944-7d7e-cdd790532112';
  $element->element_title = 'film_genre';
  $element->element_label = 'Genre, type';
  $element->description = 'Fx drama';
  $element->help_text = 'Klik på Vælg genre og vælg en eller flere genrer. Ikke alle film har en genrebetegnelse.';
  $element->sort = -66;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['710bc480-6c2c-8944-7d7e-cdd790532112'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '83c40f64-7e20-a854-b903-2c229793491d';
  $element->element_title = 'net_emne';
  $element->element_label = 'Emne';
  $element->description = 'fx mozart';
  $element->help_text = 'Skriv dit emne eller starten på det ord du søger noget om.';
  $element->sort = -76;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['83c40f64-7e20-a854-b903-2c229793491d'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '87a0cfb6-5612-c4f4-6129-5b084b0819e0';
  $element->element_title = 'film_personer';
  $element->element_label = 'Personer';
  $element->description = 'fx Trine Dyrholm';
  $element->help_text = 'Her kan du søge på instruktører, medvirkende m.v. Du kan også skrive to navne som medvirker sammen. Men ikke alle poster indeholder alle disse oplysninger.
Der sættes - og - mellem de ord du skriver.';
  $element->sort = -67;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['87a0cfb6-5612-c4f4-6129-5b084b0819e0'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '8c20a5ec-3f6d-ccf4-05f4-7cd7bce4838c';
  $element->element_title = 'musik_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: ebb nitzer';
  $element->help_text = 'Her kan du søge på titler, kunstnere, komponister, emneord og noter. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
neanderthal*';
  $element->sort = -56;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['8c20a5ec-3f6d-ccf4-05f4-7cd7bce4838c'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '9119c7bc-a105-5b34-6564-37c2a8281b05';
  $element->element_title = 'artikler_net_sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx engelsk';
  $element->help_text = 'Vælg kun sprog, hvis din søgning ellers bliver for stor.';
  $element->sort = -80;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['9119c7bc-a105-5b34-6564-37c2a8281b05'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = '9adc965a-b291-c7c4-f1c6-3e2288b3ae1d';
  $element->element_title = 'materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx bøger';
  $element->help_text = 'Vælg en eller flere materialetyper
';
  $element->sort = -96;
  $element->tab_index = 0;
  $element->access_key = 'm';
  $export['9adc965a-b291-c7c4-f1c6-3e2288b3ae1d'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a1eb1d09-0fab-0ab4-9d59-5e262a5e69d8';
  $element->element_title = 'bog_sprog';
  $element->element_label = 'Sprog';
  $element->description = 'fx tysk';
  $element->help_text = 'Vælg et eller flere sprog';
  $element->sort = -89;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['a1eb1d09-0fab-0ab4-9d59-5e262a5e69d8'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a33930c6-11a4-1be4-1d23-0c374492ba90';
  $element->element_title = 'forfatter';
  $element->element_label = 'Forfatter';
  $element->description = 'fx nesbø';
  $element->help_text = 'Søg forfatter:
Skriv den eller de dele af navnet, du er sikker på. Kombiner evt. med et ord fra titlen - det skal skrives i titelboksen. ';
  $element->sort = -100;
  $element->tab_index = 0;
  $element->access_key = 'f';
  $export['a33930c6-11a4-1be4-1d23-0c374492ba90'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a7a1e754-135d-22e4-01ad-f5a14c9bcf05';
  $element->element_title = 'musik_ophav1';
  $element->element_label = 'Medvirkende';
  $element->description = 'fx: netrebko';
  $element->help_text = 'Medvirkende: 
i begge felter kan du søge på musikere, sangere, grupper og komponister. De to felter betyder at du kan kombinere to sangere eller en kunstner og en komponist og finde hvor de optræder sammen.';
  $element->sort = -60;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['a7a1e754-135d-22e4-01ad-f5a14c9bcf05'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'a8f09c53-17e6-c954-19a9-12e38ed3061e';
  $element->element_title = 'film_bibliotekets_aldersanbefaling';
  $element->element_label = 'Aldersanbefaling';
  $element->description = 'Biblioteket anbefaler';
  $element->help_text = 'Her kan du søge på hvilken aldersgruppe filmen er egnet til.
Hold Ctrl nede for at vælge mere end én.';
  $element->sort = -62;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['a8f09c53-17e6-c954-19a9-12e38ed3061e'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ac8f6d25-93ce-6254-8d8a-2ef584f00f93';
  $element->element_title = 'artikel_emne';
  $element->element_label = 'Artiklens emne';
  $element->description = 'fx fed* fisk*';
  $element->help_text = 'Skriv dit emne - slut evt. med *
Hvis du skriver flere ord, kombinerer systemet dem med og.
Ex. pisa*';
  $element->sort = -83;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ac8f6d25-93ce-6254-8d8a-2ef584f00f93'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'b6f05f07-21d0-4fb4-eddb-9dcf25979bf4';
  $element->element_title = 'film_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx dvd';
  $element->help_text = 'Klik på et materiale, hvis du kun ønsker en bestemt type.';
  $element->sort = -63;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['b6f05f07-21d0-4fb4-eddb-9dcf25979bf4'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'c897eb1b-a9ad-ffc4-c1ac-6fc4882b48e9';
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
  $export['c897eb1b-a9ad-ffc4-c1ac-6fc4882b48e9'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'cbb77ce6-1c1d-be64-d1bc-92cfbd63c007';
  $element->element_title = 'musik_genre';
  $element->element_label = 'Musikgenre';
  $element->description = 'fx jazz';
  $element->help_text = 'Finder du ikke den type musik du leder efter vist som genre?
Søg i stedet i fritekst og klik dig frem blandt mulighederne under Flere søgemuligheder.';
  $element->sort = -55;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['cbb77ce6-1c1d-be64-d1bc-92cfbd63c007'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'd184caa7-3198-2c24-81a6-79b57f80f8ee';
  $element->element_title = 'net_titel';
  $element->element_label = 'Titel';
  $element->description = 'fx sort arbejde';
  $element->help_text = 'Skriv et eller flere ord fra titlen. ';
  $element->sort = -78;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['d184caa7-3198-2c24-81a6-79b57f80f8ee'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'd2841f46-a987-7d44-35b4-6c0f2bd571ea';
  $element->element_title = 'titel';
  $element->element_label = 'Titel';
  $element->description = 'fx varm luft';
  $element->help_text = 'Søg titel:
Skriv et eller flere ord fra titlen - flere ord kombinerer systemet med et og.
Sæt evt. * til sidst som joker eller trunkeringstegn, fx indian*';
  $element->sort = -99;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['d2841f46-a987-7d44-35b4-6c0f2bd571ea'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'd43e19bb-117f-6394-09b2-ef35548635f0';
  $element->element_title = 'spil_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: tetris';
  $element->help_text = 'Her kan du søge på ord et eller andet sted i posten. Fx titlen, udgiver eller et kort handlingsreferat. Sæt evt. trunkeringstegn, hvis du er usikker på ordet:
synge*';
  $element->sort = -73;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['d43e19bb-117f-6394-09b2-ef35548635f0'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'daf97466-052f-af84-2104-20ed9b1f8a33';
  $element->element_title = 'musik_ophav2';
  $element->element_label = 'Medvirkende';
  $element->description = 'fx: villazon';
  $element->help_text = 'Medvirkende:
i begge felter kan du søge på musikere, sangere, grupper og komponister. De to felter betyder at du kan kombinere to sangere eller en kunstner og en komponist.';
  $element->sort = 10;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['daf97466-052f-af84-2104-20ed9b1f8a33'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'e23b65e2-0e36-6654-b996-1ac0a8802c0b';
  $element->element_title = 'net_materialetype';
  $element->element_label = 'Materialetype';
  $element->description = 'fx tekster på nettet';
  $element->help_text = 'Vælg et materiale på listen, hvis du ikke vil søge i alle materialer.';
  $element->sort = -75;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['e23b65e2-0e36-6654-b996-1ac0a8802c0b'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ec91fdc3-9b96-4ec4-9d31-ce1837420188';
  $element->element_title = 'fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx matterhorn';
  $element->help_text = 'Søg fritekst:
Her søger du i de fleste oplysninger i posterne. Du kan sætte en joker (trunkering):  * - når du er i tvivl. Ex.: lånemulighed*. Du skal ikke skrive og mellem ordene. ';
  $element->sort = -97;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ec91fdc3-9b96-4ec4-9d31-ce1837420188'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ed0c3ade-d33c-e2a4-cdeb-e9fe6138cfac';
  $element->element_title = 'spil_titel';
  $element->element_label = 'Titel';
  $element->description = 'fx bulletstorm';
  $element->help_text = 'Her kan du søge på spillets titel.';
  $element->sort = -74;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ed0c3ade-d33c-e2a4-cdeb-e9fe6138cfac'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'ef643df3-8f57-fad4-d5a8-f399ed087522';
  $element->element_title = 'net_forfatter';
  $element->element_label = 'Forfatter eller udgiver';
  $element->description = 'fx skat';
  $element->help_text = 'Skriv den eller de dele af navnet, du er sikker på. 
';
  $element->sort = -79;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['ef643df3-8f57-fad4-d5a8-f399ed087522'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'f184c76d-4b2f-74e4-7961-e83c2a1045d6';
  $element->element_title = 'bog_fritekst';
  $element->element_label = 'Fritekst';
  $element->description = 'fx: thorsminde';
  $element->help_text = 'Her søger du i de fleste oplysninger i posterne
Du kan bruge en * - når du er i tvivl, fx sejl*
Du skal ikke skrive og mellem ordene.';
  $element->sort = -91;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['f184c76d-4b2f-74e4-7961-e83c2a1045d6'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $element->element_title = 'år';
  $element->element_label = 'Udgivelsesår';
  $element->description = 'Vælg Før, Efter eller Lig med et år';
  $element->help_text = 'Vælg Lig med, Før eller Efter og et årstal';
  $element->sort = -95;
  $element->tab_index = 0;
  $element->access_key = 'y';
  $export['f19d3232-7469-8124-b937-adeddafb9b43'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'f48cbeaa-24bb-dc44-011e-60b32dc90703';
  $element->element_title = 'artikel_forfatter';
  $element->element_label = 'Artiklens forfatter';
  $element->description = 'fx morten albæk';
  $element->help_text = 'Skriv det eller de dele af forfatterens navn du kender.
Ex: mette højbjerg';
  $element->sort = -85;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['f48cbeaa-24bb-dc44-011e-60b32dc90703'] = $element;

  $element = new stdClass();
  $element->disabled = FALSE; /* Edit this to true to make a default element disabled initially */
  $element->api_version = 1;
  $element->e_uuid = 'fbe85846-69c8-d654-2992-63704cd38992';
  $element->element_title = 'spil_platform';
  $element->element_label = 'Platform';
  $element->description = 'fx nintendo ds';
  $element->help_text = 'Vælg en eller flere platforme.';
  $element->sort = -72;
  $element->tab_index = 0;
  $element->access_key = '';
  $export['fbe85846-69c8-d654-2992-63704cd38992'] = $element;

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
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = '87a0cfb6-5612-c4f4-6129-5b084b0819e0';
  $map_element->me_uuid = '079fe0eb-5c2d-f664-0951-1aa9b6f3be61';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['079fe0eb-5c2d-f664-0951-1aa9b6f3be61'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $map_element->e_uuid = '403b88cf-573a-2274-b902-e4281151eafe';
  $map_element->me_uuid = '0d7b1300-790b-3804-0959-873dc5ad2d45';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['0d7b1300-790b-3804-0959-873dc5ad2d45'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = '29de65a3-5047-e7e4-3dad-3daf07984c31';
  $map_element->me_uuid = '14b43414-c92c-a524-11b2-3c1883176609';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['14b43414-c92c-a524-11b2-3c1883176609'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = 'b6f05f07-21d0-4fb4-eddb-9dcf25979bf4';
  $map_element->me_uuid = '2050274c-9b40-8524-9976-24a3d18c7db9';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['2050274c-9b40-8524-9976-24a3d18c7db9'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '2e4dc5d5-48a9-1d54-b1a1-445dc1eb087c';
  $map_element->me_uuid = '26512d9e-b484-c974-311a-bfab2f034b85';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['26512d9e-b484-c974-311a-bfab2f034b85'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '61133aa9-e0af-04c4-8d7c-4ac1bd4c7d82';
  $map_element->me_uuid = '31ee4833-746d-8074-5942-9ccaeb1bf4cc';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['31ee4833-746d-8074-5942-9ccaeb1bf4cc'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '21423571-5991-63d4-1560-4324314c9ebb';
  $map_element->me_uuid = '32cc6128-017f-6d44-79b5-0be20f955712';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['32cc6128-017f-6d44-79b5-0be20f955712'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = '83c40f64-7e20-a854-b903-2c229793491d';
  $map_element->me_uuid = '36ced93b-474b-7a74-792d-4ebc96c5a400';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['36ced93b-474b-7a74-792d-4ebc96c5a400'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = '67855bf4-3e7d-fd84-cdc3-b8103f4ff3fb';
  $map_element->me_uuid = '3d1b4b28-bbc7-6094-3566-a6c477433969';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['3d1b4b28-bbc7-6094-3566-a6c477433969'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '242f0da9-dc5c-a1a4-19e5-82c59d16abf4';
  $map_element->me_uuid = '418387e9-25a1-93a4-1198-96b11bea6999';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['418387e9-25a1-93a4-1198-96b11bea6999'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = '6c8926b2-1f16-7cd4-b951-f0174d73d165';
  $map_element->me_uuid = '42e3f060-7d03-5164-ed3b-983091b27d27';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['42e3f060-7d03-5164-ed3b-983091b27d27'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = 'daf97466-052f-af84-2104-20ed9b1f8a33';
  $map_element->me_uuid = '444be2c6-7ed6-8b04-a58a-64ec3d18aa53';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['444be2c6-7ed6-8b04-a58a-64ec3d18aa53'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = 'a1eb1d09-0fab-0ab4-9d59-5e262a5e69d8';
  $map_element->me_uuid = '46a1fcdc-dee2-73c4-6120-f0fd0c3759bc';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['46a1fcdc-dee2-73c4-6120-f0fd0c3759bc'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = 'a8f09c53-17e6-c954-19a9-12e38ed3061e';
  $map_element->me_uuid = '4bc9d16f-0d66-82f4-49ec-6ba5d88e4da7';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['4bc9d16f-0d66-82f4-49ec-6ba5d88e4da7'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = '710bc480-6c2c-8944-7d7e-cdd790532112';
  $map_element->me_uuid = '4e0fe063-48b0-e1c4-1da0-d92782bb74e4';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['4e0fe063-48b0-e1c4-1da0-d92782bb74e4'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = '9adc965a-b291-c7c4-f1c6-3e2288b3ae1d';
  $map_element->me_uuid = '528c7478-bb79-5c44-994f-d6082764570a';
  $map_element->region = 'expand';
  $map_element->sort = -50;
  $export['528c7478-bb79-5c44-994f-d6082764570a'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = '3e16c99f-e86c-d224-fd20-969102db08e8';
  $map_element->me_uuid = '55a27660-3ab3-7884-fdae-d838620de897';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['55a27660-3ab3-7884-fdae-d838620de897'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_element->me_uuid = '5a2ff083-e626-6984-411c-4230c12bde04';
  $map_element->region = 'expand';
  $map_element->sort = -44;
  $export['5a2ff083-e626-6984-411c-4230c12bde04'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '1cea7299-c8d3-f924-dd7c-3eafb5fae5c3';
  $map_element->me_uuid = '8323c355-a8f4-5704-cd3f-3298ec9114a9';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['8323c355-a8f4-5704-cd3f-3298ec9114a9'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '42a952b5-c6da-7254-5de1-c5242178d79a';
  $map_element->e_uuid = '664dcf79-3e0a-7ba4-89f9-b5579b16d8a5';
  $map_element->me_uuid = '87ba4f91-95f3-72c4-e5e9-5b23de70013f';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['87ba4f91-95f3-72c4-e5e9-5b23de70013f'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $map_element->e_uuid = '4a65567f-8537-c2f4-798d-b4e3412e7631';
  $map_element->me_uuid = '8b21d441-8a06-f484-7d1e-f449fecfc568';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['8b21d441-8a06-f484-7d1e-f449fecfc568'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = 'd184caa7-3198-2c24-81a6-79b57f80f8ee';
  $map_element->me_uuid = '8c4fbb70-48e4-82a4-b1dc-e0ea90112a6c';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['8c4fbb70-48e4-82a4-b1dc-e0ea90112a6c'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $map_element->e_uuid = '3cfb5dcf-864d-c4e4-6d13-5a26578d5dff';
  $map_element->me_uuid = '8dc6e78b-12e9-9754-5d74-ede3711c0d7a';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['8dc6e78b-12e9-9754-5d74-ede3711c0d7a'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = '55310980-6664-ff84-39af-1640ea9d4f5c';
  $map_element->me_uuid = '8e160de0-5c3c-5204-cd12-26effcc1f6b5';
  $map_element->region = 'main';
  $map_element->sort = -46;
  $export['8e160de0-5c3c-5204-cd12-26effcc1f6b5'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = '5afd8391-90e0-8e54-c1af-36a8b95fa0e7';
  $map_element->me_uuid = '97e69938-041a-aff4-6138-7fa53c496384';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['97e69938-041a-aff4-6138-7fa53c496384'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = 'e23b65e2-0e36-6654-b996-1ac0a8802c0b';
  $map_element->me_uuid = '9bde73fa-7140-63f4-41ab-77f696250182';
  $map_element->region = 'expand';
  $map_element->sort = -48;
  $export['9bde73fa-7140-63f4-41ab-77f696250182'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_element->me_uuid = 'a2a7de7d-550e-d5b4-39e7-fd019a541f17';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['a2a7de7d-550e-d5b4-39e7-fd019a541f17'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = '1c48b036-3823-0d34-e955-dc71795f8875';
  $map_element->me_uuid = 'a428ff79-4191-88f4-1587-2d9ad300a3b9';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['a428ff79-4191-88f4-1587-2d9ad300a3b9'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = '9119c7bc-a105-5b34-6564-37c2a8281b05';
  $map_element->me_uuid = 'a77f4078-65a7-ee14-0156-b461b342d3e8';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['a77f4078-65a7-ee14-0156-b461b342d3e8'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_element->me_uuid = 'acb5be6a-5030-8d04-05c3-9058f58f34e8';
  $map_element->region = 'expand';
  $map_element->sort = -49;
  $export['acb5be6a-5030-8d04-05c3-9058f58f34e8'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = '38002688-6b4c-8234-5dfb-9f6c381192c8';
  $map_element->me_uuid = 'ae209ccf-c8df-9d24-cdce-518d4e0b56ec';
  $map_element->region = 'main';
  $map_element->sort = -46;
  $export['ae209ccf-c8df-9d24-cdce-518d4e0b56ec'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = 'd2841f46-a987-7d44-35b4-6c0f2bd571ea';
  $map_element->me_uuid = 'b41a0761-f054-cba4-9dfd-2e37323d5625';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['b41a0761-f054-cba4-9dfd-2e37323d5625'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'e63ad1dc-e807-0834-01c9-c30fe97b37da';
  $map_element->e_uuid = '0dba9809-7566-e0d4-153c-c0330caa7bfb';
  $map_element->me_uuid = 'b5683e58-84c0-bde4-e100-9d67c63741c0';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['b5683e58-84c0-bde4-e100-9d67c63741c0'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '4538c317-0ad1-5fe4-7124-74e163d705bb';
  $map_element->e_uuid = 'a33930c6-11a4-1be4-1d23-0c374492ba90';
  $map_element->me_uuid = 'bb004a39-aa18-44b4-55fc-8d052e4d6dc5';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['bb004a39-aa18-44b4-55fc-8d052e4d6dc5'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $map_element->e_uuid = 'ed0c3ade-d33c-e2a4-cdeb-e9fe6138cfac';
  $map_element->me_uuid = 'bb66c8d2-f9dd-b444-bdd1-66e28d2236cf';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['bb66c8d2-f9dd-b444-bdd1-66e28d2236cf'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = 'ef643df3-8f57-fad4-d5a8-f399ed087522';
  $map_element->me_uuid = 'bd26cdeb-70ea-c634-75f6-2181cfbe7be1';
  $map_element->region = 'main';
  $map_element->sort = -49;
  $export['bd26cdeb-70ea-c634-75f6-2181cfbe7be1'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_element->me_uuid = 'c2057e9c-0030-3184-b5b8-6691a88878a7';
  $map_element->region = 'expand';
  $map_element->sort = -45;
  $export['c2057e9c-0030-3184-b5b8-6691a88878a7'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = '3d8ddeb5-872e-3784-d5b8-d3730b8d5d15';
  $map_element->me_uuid = 'c3fa3fec-6e41-6924-c941-389f6dfdde34';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['c3fa3fec-6e41-6924-c941-389f6dfdde34'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = 'cbb77ce6-1c1d-be64-d1bc-92cfbd63c007';
  $map_element->me_uuid = 'c5f57692-8800-2bd4-c5d4-2560de01b523';
  $map_element->region = 'main';
  $map_element->sort = -45;
  $export['c5f57692-8800-2bd4-c5d4-2560de01b523'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'fafcfc40-1c17-4364-c522-4ee5256fea28';
  $map_element->e_uuid = 'fbe85846-69c8-d654-2992-63704cd38992';
  $map_element->me_uuid = 'd9b03920-891d-3824-253e-76ac340fc531';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['d9b03920-891d-3824-253e-76ac340fc531'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'f9d3db9c-ebb3-fc24-b99c-c7823b1369dd';
  $map_element->e_uuid = '9119c7bc-a105-5b34-6564-37c2a8281b05';
  $map_element->me_uuid = 'de8f2a69-5781-e304-95b4-35a7a74580a8';
  $map_element->region = 'expand';
  $map_element->sort = -47;
  $export['de8f2a69-5781-e304-95b4-35a7a74580a8'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = 'a7a1e754-135d-22e4-01ad-f5a14c9bcf05';
  $map_element->me_uuid = 'df507dcb-c8f9-9534-0d73-c5632ea675fc';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['df507dcb-c8f9-9534-0d73-c5632ea675fc'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = '24acfbd6-0ea0-43a4-398b-438d3300aab2';
  $map_element->me_uuid = 'e45b29de-58e7-9cc4-25da-ced2fefc0e6b';
  $map_element->region = 'main';
  $map_element->sort = -50;
  $export['e45b29de-58e7-9cc4-25da-ced2fefc0e6b'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = 'f48cbeaa-24bb-dc44-011e-60b32dc90703';
  $map_element->me_uuid = 'e84591fd-e033-edc4-b1a5-219aa36d2902';
  $map_element->region = 'main';
  $map_element->sort = -48;
  $export['e84591fd-e033-edc4-b1a5-219aa36d2902'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = '8edd9197-ecff-02a4-99b0-e9e910bd4c39';
  $map_element->e_uuid = 'ac8f6d25-93ce-6254-8d8a-2ef584f00f93';
  $map_element->me_uuid = 'ebcb74ec-d852-ea34-b1a1-bad16f1d5263';
  $map_element->region = 'main';
  $map_element->sort = -47;
  $export['ebcb74ec-d852-ea34-b1a1-bad16f1d5263'] = $map_element;

  $map_element = new stdClass();
  $map_element->disabled = FALSE; /* Edit this to true to make a default map_element disabled initially */
  $map_element->api_version = 1;
  $map_element->p_uuid = 'b7101e61-40af-fff4-e1fe-da7ee7ac5aad';
  $map_element->e_uuid = '4328722b-c325-77a4-5595-61fe52c3e977';
  $map_element->me_uuid = 'fb54c255-0900-8e74-35d7-d6a78eb32399';
  $map_element->region = 'expand';
  $map_element->sort = -46;
  $export['fb54c255-0900-8e74-35d7-d6a78eb32399'] = $map_element;

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
  $map_values->mv_uuid = '0591046e-6438-1df4-b903-5ad88184e16a';
  $map_values->e_uuid = 'ef643df3-8f57-fad4-d5a8-f399ed087522';
  $map_values->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $map_values->sort = 10;
  $export['0591046e-6438-1df4-b903-5ad88184e16a'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0846a766-07ca-09a4-61e0-a6d03c82db9a';
  $map_values->e_uuid = '664dcf79-3e0a-7ba4-89f9-b5579b16d8a5';
  $map_values->v_uuid = 'c19cb357-2094-1a84-0d8b-d96e4ec1b698';
  $map_values->sort = 10;
  $export['0846a766-07ca-09a4-61e0-a6d03c82db9a'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '09c64560-84d7-9f74-95ac-931e9302aee9';
  $map_values->e_uuid = 'd184caa7-3198-2c24-81a6-79b57f80f8ee';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['09c64560-84d7-9f74-95ac-931e9302aee9'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0af8cf13-18d0-9214-b1b6-8934010e7118';
  $map_values->e_uuid = '67855bf4-3e7d-fd84-cdc3-b8103f4ff3fb';
  $map_values->v_uuid = '6c845814-0b74-e184-6501-594909f25552';
  $map_values->sort = 10;
  $export['0af8cf13-18d0-9214-b1b6-8934010e7118'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0d783d75-d52d-05f4-f511-cf5c965b9f02';
  $map_values->e_uuid = '2416c8be-cf54-86d4-315f-2b9ef50a3d2f';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['0d783d75-d52d-05f4-f511-cf5c965b9f02'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0f5e7ee7-c329-aa34-450e-7baebcd09525';
  $map_values->e_uuid = 'ed0c3ade-d33c-e2a4-cdeb-e9fe6138cfac';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['0f5e7ee7-c329-aa34-450e-7baebcd09525'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '0f88163a-8fb9-4c64-b112-ecbd32810870';
  $map_values->e_uuid = '0dba9809-7566-e0d4-153c-c0330caa7bfb';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['0f88163a-8fb9-4c64-b112-ecbd32810870'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '14f71470-0e1b-12c4-8119-feb76aabdfea';
  $map_values->e_uuid = '6c8926b2-1f16-7cd4-b951-f0174d73d165';
  $map_values->v_uuid = '0161e74a-4d44-b294-6d7d-1d0f98d44b72';
  $map_values->sort = 10;
  $export['14f71470-0e1b-12c4-8119-feb76aabdfea'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '18fda3c4-96bb-9d54-45fd-17698fd58a71';
  $map_values->e_uuid = '1cea7299-c8d3-f924-dd7c-3eafb5fae5c3';
  $map_values->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $map_values->sort = 10;
  $export['18fda3c4-96bb-9d54-45fd-17698fd58a71'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '1adad0e7-0f88-64e4-0d37-f821d22ffded';
  $map_values->e_uuid = 'a7a1e754-135d-22e4-01ad-f5a14c9bcf05';
  $map_values->v_uuid = '964fd0c7-3334-63c4-71be-6735cbdcd5e0';
  $map_values->sort = 10;
  $export['1adad0e7-0f88-64e4-0d37-f821d22ffded'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '1dc6c011-8ba2-eb94-6500-8b4b151adb59';
  $map_values->e_uuid = '57b33f4f-336f-f784-710a-4964351e9040';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['1dc6c011-8ba2-eb94-6500-8b4b151adb59'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '2cd07bf8-dbb6-a4e4-1d91-8019a6f4aef9';
  $map_values->e_uuid = 'c897eb1b-a9ad-ffc4-c1ac-6fc4882b48e9';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['2cd07bf8-dbb6-a4e4-1d91-8019a6f4aef9'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '324fd044-fa40-57b4-e9d1-b8362eb07194';
  $map_values->e_uuid = 'ac8f6d25-93ce-6254-8d8a-2ef584f00f93';
  $map_values->v_uuid = '1f708924-4dc5-38d4-110e-e75fda58ac72';
  $map_values->sort = 10;
  $export['324fd044-fa40-57b4-e9d1-b8362eb07194'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '37cce3c0-1711-07a4-3d12-aafbaa5398bd';
  $map_values->e_uuid = '3cfb5dcf-864d-c4e4-6d13-5a26578d5dff';
  $map_values->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $map_values->sort = 10;
  $export['37cce3c0-1711-07a4-3d12-aafbaa5398bd'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '3815ce49-5df6-b214-ed6d-a2a351159dac';
  $map_values->e_uuid = 'daf97466-052f-af84-2104-20ed9b1f8a33';
  $map_values->v_uuid = '10b4d35a-a282-ad84-5914-aae55839cc3b';
  $map_values->sort = 10;
  $export['3815ce49-5df6-b214-ed6d-a2a351159dac'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '3b490f37-8065-6444-e5a1-7c3820772329';
  $map_values->e_uuid = '21423571-5991-63d4-1560-4324314c9ebb';
  $map_values->v_uuid = '1f708924-4dc5-38d4-110e-e75fda58ac72';
  $map_values->sort = 10;
  $export['3b490f37-8065-6444-e5a1-7c3820772329'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '400dbde9-f164-16c4-a9fa-3a7dc4ced9be';
  $map_values->e_uuid = 'ec91fdc3-9b96-4ec4-9d31-ce1837420188';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['400dbde9-f164-16c4-a9fa-3a7dc4ced9be'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '45a987c0-4128-ab84-dd0f-959ddf7aa628';
  $map_values->e_uuid = '5afd8391-90e0-8e54-c1af-36a8b95fa0e7';
  $map_values->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $map_values->sort = 10;
  $export['45a987c0-4128-ab84-dd0f-959ddf7aa628'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '485e367d-6b4a-b834-097c-6c440f9f7fb6';
  $map_values->e_uuid = '1c48b036-3823-0d34-e955-dc71795f8875';
  $map_values->v_uuid = '1f708924-4dc5-38d4-110e-e75fda58ac72';
  $map_values->sort = 10;
  $export['485e367d-6b4a-b834-097c-6c440f9f7fb6'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '4b88e977-4c36-f1a4-3d2b-f52c3472d925';
  $map_values->e_uuid = 'cbb77ce6-1c1d-be64-d1bc-92cfbd63c007';
  $map_values->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $map_values->sort = 10;
  $export['4b88e977-4c36-f1a4-3d2b-f52c3472d925'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '50cd83b6-d26e-c184-31ab-2e8f760813b9';
  $map_values->e_uuid = 'b6f05f07-21d0-4fb4-eddb-9dcf25979bf4';
  $map_values->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $map_values->sort = 10;
  $export['50cd83b6-d26e-c184-31ab-2e8f760813b9'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '51c99e73-8095-ab94-f1d3-964dca9ba1f7';
  $map_values->e_uuid = 'a1eb1d09-0fab-0ab4-9d59-5e262a5e69d8';
  $map_values->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $map_values->sort = 10;
  $export['51c99e73-8095-ab94-f1d3-964dca9ba1f7'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '55e5e9e4-4c94-11b4-1582-7eece7234c78';
  $map_values->e_uuid = '710bc480-6c2c-8944-7d7e-cdd790532112';
  $map_values->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $map_values->sort = 10;
  $export['55e5e9e4-4c94-11b4-1582-7eece7234c78'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '5919ecf0-af8e-6374-71e9-bc9bea630c61';
  $map_values->e_uuid = '9adc965a-b291-c7c4-f1c6-3e2288b3ae1d';
  $map_values->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $map_values->sort = 10;
  $export['5919ecf0-af8e-6374-71e9-bc9bea630c61'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '5b67deae-b439-0dd4-2dc6-c88d5a132e2e';
  $map_values->e_uuid = '87a0cfb6-5612-c4f4-6129-5b084b0819e0';
  $map_values->v_uuid = '1a596610-b816-60c4-596d-968ed8a137f8';
  $map_values->sort = 10;
  $export['5b67deae-b439-0dd4-2dc6-c88d5a132e2e'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6282553f-94ff-7304-2928-de358cbd6151';
  $map_values->e_uuid = '38002688-6b4c-8234-5dfb-9f6c381192c8';
  $map_values->v_uuid = '190c6f8a-209b-ad04-110e-40e87002dfc8';
  $map_values->sort = 10;
  $export['6282553f-94ff-7304-2928-de358cbd6151'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '6c787ef9-c7c2-70c4-7dae-6e254cef31f2';
  $map_values->e_uuid = '61133aa9-e0af-04c4-8d7c-4ac1bd4c7d82';
  $map_values->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $map_values->sort = 10;
  $export['6c787ef9-c7c2-70c4-7dae-6e254cef31f2'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '70b5d108-49d0-1644-19e7-cec3e1e40442';
  $map_values->e_uuid = '3d8ddeb5-872e-3784-d5b8-d3730b8d5d15';
  $map_values->v_uuid = 'c8194635-c911-b994-05e7-b4a3c15edeec';
  $map_values->sort = 10;
  $export['70b5d108-49d0-1644-19e7-cec3e1e40442'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '7395710c-6e20-1af4-71b8-ae40b5f18016';
  $map_values->e_uuid = '4328722b-c325-77a4-5595-61fe52c3e977';
  $map_values->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $map_values->sort = 10;
  $export['7395710c-6e20-1af4-71b8-ae40b5f18016'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '7399f7c5-c5f3-a5a4-99ca-8f09e4729f05';
  $map_values->e_uuid = '29de65a3-5047-e7e4-3dad-3daf07984c31';
  $map_values->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $map_values->sort = 10;
  $export['7399f7c5-c5f3-a5a4-99ca-8f09e4729f05'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '768e1063-3103-8104-b5fa-cfd8834e74fe';
  $map_values->e_uuid = '242f0da9-dc5c-a1a4-19e5-82c59d16abf4';
  $map_values->v_uuid = 'c7eee360-43fc-0614-3de3-52609300d946';
  $map_values->sort = 10;
  $export['768e1063-3103-8104-b5fa-cfd8834e74fe'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '76d6b67c-e7eb-87a4-b988-dac984639092';
  $map_values->e_uuid = '24acfbd6-0ea0-43a4-398b-438d3300aab2';
  $map_values->v_uuid = '17dac9bb-18b9-1c44-1da7-59d0a2d895d4';
  $map_values->sort = 10;
  $export['76d6b67c-e7eb-87a4-b988-dac984639092'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '84c751a1-948e-8dc4-dd56-cb9d58b7b8e3';
  $map_values->e_uuid = '4a65567f-8537-c2f4-798d-b4e3412e7631';
  $map_values->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $map_values->sort = 10;
  $export['84c751a1-948e-8dc4-dd56-cb9d58b7b8e3'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '8e3cd60e-bb03-b024-e5b3-1c4cbb942062';
  $map_values->e_uuid = '55310980-6664-ff84-39af-1640ea9d4f5c';
  $map_values->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $map_values->sort = 10;
  $export['8e3cd60e-bb03-b024-e5b3-1c4cbb942062'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '930ad6d6-539e-2b84-352b-0182c9c91fe2';
  $map_values->e_uuid = '83c40f64-7e20-a854-b903-2c229793491d';
  $map_values->v_uuid = '1f708924-4dc5-38d4-110e-e75fda58ac72';
  $map_values->sort = 10;
  $export['930ad6d6-539e-2b84-352b-0182c9c91fe2'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '939696fc-53a0-66c4-8528-1018352dbedb';
  $map_values->e_uuid = '8c20a5ec-3f6d-ccf4-05f4-7cd7bce4838c';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['939696fc-53a0-66c4-8528-1018352dbedb'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '97fc1619-4572-53f4-4197-568a50211ffa';
  $map_values->e_uuid = 'f184c76d-4b2f-74e4-7961-e83c2a1045d6';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['97fc1619-4572-53f4-4197-568a50211ffa'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '9a94f05f-d16a-6684-e575-221aaaf6042f';
  $map_values->e_uuid = 'e23b65e2-0e36-6654-b996-1ac0a8802c0b';
  $map_values->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $map_values->sort = 10;
  $export['9a94f05f-d16a-6684-e575-221aaaf6042f'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '9d24ebae-b80d-bff4-55c5-0517ab583a61';
  $map_values->e_uuid = 'a33930c6-11a4-1be4-1d23-0c374492ba90';
  $map_values->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $map_values->sort = 10;
  $export['9d24ebae-b80d-bff4-55c5-0517ab583a61'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '9dfb3161-ab35-35f4-49fc-adb4acaf1943';
  $map_values->e_uuid = '2e4dc5d5-48a9-1d54-b1a1-445dc1eb087c';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['9dfb3161-ab35-35f4-49fc-adb4acaf1943'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = '9f7f321c-c07b-e464-8de2-8457a4aaa03b';
  $map_values->e_uuid = '9119c7bc-a105-5b34-6564-37c2a8281b05';
  $map_values->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $map_values->sort = 10;
  $export['9f7f321c-c07b-e464-8de2-8457a4aaa03b'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'a8ab496f-93c9-fa54-81c7-74de437bf047';
  $map_values->e_uuid = 'fbe85846-69c8-d654-2992-63704cd38992';
  $map_values->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $map_values->sort = 10;
  $export['a8ab496f-93c9-fa54-81c7-74de437bf047'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'ae4f573e-3b83-8f64-d568-ffdd78a885e3';
  $map_values->e_uuid = 'd43e19bb-117f-6394-09b2-ef35548635f0';
  $map_values->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $map_values->sort = 10;
  $export['ae4f573e-3b83-8f64-d568-ffdd78a885e3'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'b7c994f1-8dfd-6084-0db7-e9d6cf0d57e7';
  $map_values->e_uuid = '3e16c99f-e86c-d224-fd20-969102db08e8';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['b7c994f1-8dfd-6084-0db7-e9d6cf0d57e7'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'b92d3473-d7b5-72e4-31ee-238732148b53';
  $map_values->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_values->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $map_values->sort = -100;
  $export['b92d3473-d7b5-72e4-31ee-238732148b53'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'c24e500e-d277-da34-3d76-d29783b31865';
  $map_values->e_uuid = '403b88cf-573a-2274-b902-e4281151eafe';
  $map_values->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $map_values->sort = 10;
  $export['c24e500e-d277-da34-3d76-d29783b31865'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'd446d6d9-286e-66f4-21a7-35d4781fadec';
  $map_values->e_uuid = 'd2841f46-a987-7d44-35b4-6c0f2bd571ea';
  $map_values->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $map_values->sort = 10;
  $export['d446d6d9-286e-66f4-21a7-35d4781fadec'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'e1871c05-2bca-3b34-c10b-d863e429f6bb';
  $map_values->e_uuid = 'f19d3232-7469-8124-b937-adeddafb9b43';
  $map_values->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $map_values->sort = -99;
  $export['e1871c05-2bca-3b34-c10b-d863e429f6bb'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'e1bc2ae3-4371-3324-816c-7f78204eeac5';
  $map_values->e_uuid = 'f48cbeaa-24bb-dc44-011e-60b32dc90703';
  $map_values->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $map_values->sort = 10;
  $export['e1bc2ae3-4371-3324-816c-7f78204eeac5'] = $map_values;

  $map_values = new stdClass();
  $map_values->disabled = FALSE; /* Edit this to true to make a default map_values disabled initially */
  $map_values->api_version = 1;
  $map_values->mv_uuid = 'fdf65aca-81c8-2ba4-b12e-a1fe50bcabd1';
  $map_values->e_uuid = 'a8f09c53-17e6-c954-19a9-12e38ed3061e';
  $map_values->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $map_values->sort = 10;
  $export['fdf65aca-81c8-2ba4-b12e-a1fe50bcabd1'] = $map_values;

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
  $option->o_uuid = '001ca354-c6df-1194-8d62-4ae9aeb76dd5';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['001ca354-c6df-1194-8d62-4ae9aeb76dd5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '01404609-7d37-c7d4-f170-d5b583f15e2b';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -68;
  $option->label = 'vietnamesisk';
  $option->value = 'vietnamesisk';
  $option->expand = 0;
  $export['01404609-7d37-c7d4-f170-d5b583f15e2b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '033ed47a-f4a4-f684-95ea-d44f4ae95498';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -93;
  $option->label = 'finsk';
  $option->value = 'finsk';
  $option->expand = 0;
  $export['033ed47a-f4a4-f684-95ea-d44f4ae95498'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '046eddce-cdd8-ed14-3935-1df322515b97';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -84;
  $option->label = 'musik (alle typer)';
  $option->value = 'musik';
  $option->expand = 0;
  $export['046eddce-cdd8-ed14-3935-1df322515b97'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0557ac70-58d6-b504-5969-d3529728866d';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 2;
  $option->label = '1912';
  $option->value = '1912';
  $option->expand = 0;
  $export['0557ac70-58d6-b504-5969-d3529728866d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '05645065-821c-22a4-c510-4b0e06747f68';
  $option->v_uuid = '03e9f728-e8d0-eb44-f9b6-9f465cbb43e6';
  $option->sort = 10;
  $option->label = 'stor skrift';
  $option->value = 'bog stor skrift';
  $option->expand = 0;
  $export['05645065-821c-22a4-c510-4b0e06747f68'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '05a3c0cf-1d4b-9f74-ed76-b1fc0c89ba1b';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -91;
  $option->label = 'polske spillefilm';
  $option->value = 'poslk';
  $option->expand = 0;
  $export['05a3c0cf-1d4b-9f74-ed76-b1fc0c89ba1b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '063ec90b-6141-6794-4934-caea60a93525';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -48;
  $option->label = '1962';
  $option->value = '1962';
  $option->expand = 0;
  $export['063ec90b-6141-6794-4934-caea60a93525'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '07b96f02-9bef-4524-4519-b279d856aef8';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -70;
  $option->label = 'ungarsk';
  $option->value = 'ungarsk';
  $option->expand = 0;
  $export['07b96f02-9bef-4524-4519-b279d856aef8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '07c13d64-774e-3b84-a5a8-bd7f92354052';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -88;
  $option->label = 'Fra 13 år';
  $option->value = 'Fra 13 år';
  $option->expand = 0;
  $export['07c13d64-774e-3b84-a5a8-bd7f92354052'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '07ea442b-3b68-1974-91c1-83c50e3c97f4';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -99;
  $option->label = 'actionspil';
  $option->value = 'actionspil';
  $option->expand = 0;
  $export['07ea442b-3b68-1974-91c1-83c50e3c97f4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '08e311a4-4540-b784-fd6d-9f8c75288a86';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -93;
  $option->label = 'Fra 8 år';
  $option->value = 'Fra 8 år';
  $option->expand = 0;
  $export['08e311a4-4540-b784-fd6d-9f8c75288a86'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '09182136-7a15-20e4-f5ac-51d8c5c28aa7';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -86;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['09182136-7a15-20e4-f5ac-51d8c5c28aa7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '093440d3-cd46-1574-7d4c-27388054f67c';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -96;
  $option->label = 'Fra 16 år';
  $option->value = 'Fra 16 år';
  $option->expand = 0;
  $export['093440d3-cd46-1574-7d4c-27388054f67c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '09d11e2f-dc29-8674-69f3-98532c27757e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -38;
  $option->label = '1952';
  $option->value = '1952';
  $option->expand = 0;
  $export['09d11e2f-dc29-8674-69f3-98532c27757e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0a8adbd6-5bcd-7874-998b-a0ab56da1f33';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -84;
  $option->label = '1998';
  $option->value = '1998';
  $option->expand = 0;
  $export['0a8adbd6-5bcd-7874-998b-a0ab56da1f33'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0bcac208-bf68-e524-45c5-27de53918dc7';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -86;
  $option->label = '2000';
  $option->value = '2000';
  $option->expand = 0;
  $export['0bcac208-bf68-e524-45c5-27de53918dc7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0dba37bb-727a-3d74-a1d4-3763729715a8';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -99;
  $option->label = 'pc-spil';
  $option->value = 'pc-spil';
  $option->expand = 0;
  $export['0dba37bb-727a-3d74-a1d4-3763729715a8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '0fa6f28c-9747-a194-4d4c-53e3d368aa43';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -83;
  $option->label = 'musik';
  $option->value = 'musik';
  $option->expand = 26;
  $export['0fa6f28c-9747-a194-4d4c-53e3d368aa43'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '118953e1-a76f-41c4-218e-589cf8f3f26e';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -96;
  $option->label = 'punktskrift (braille)';
  $option->value = 'punktskrift';
  $option->expand = 0;
  $export['118953e1-a76f-41c4-218e-589cf8f3f26e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '135459e6-6cc6-9ca4-794b-1dee7fc50b9e';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -93;
  $option->label = 'platformspil';
  $option->value = 'platformspil';
  $option->expand = 0;
  $export['135459e6-6cc6-9ca4-794b-1dee7fc50b9e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '13d22ba0-9e3a-a984-918a-37f1321f66e2';
  $option->v_uuid = 'c19cb357-2094-1a84-0d8b-d96e4ec1b698';
  $option->sort = -98;
  $option->label = 'Voksne';
  $option->value = 'voksne';
  $option->expand = 0;
  $export['13d22ba0-9e3a-a984-918a-37f1321f66e2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '14003d29-7c5a-3704-c937-c59d97520365';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -29;
  $option->label = '1943';
  $option->value = '1943';
  $option->expand = 0;
  $export['14003d29-7c5a-3704-c937-c59d97520365'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '14a37657-ecf5-0e44-dd0c-bdc8547185a3';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -67;
  $option->label = '1981';
  $option->value = '1981';
  $option->expand = 0;
  $export['14a37657-ecf5-0e44-dd0c-bdc8547185a3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '15022fd1-cdd4-7524-c5ea-b2237dbbfbfa';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -52;
  $option->label = '1966';
  $option->value = '1966';
  $option->expand = 0;
  $export['15022fd1-cdd4-7524-c5ea-b2237dbbfbfa'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '169e8e1e-6661-0694-094d-47e3940ce313';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -96;
  $option->label = 'Fra 5 år';
  $option->value = 'Fra 5 år';
  $option->expand = 0;
  $export['169e8e1e-6661-0694-094d-47e3940ce313'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '16f031c8-3502-5344-7943-5308e575dbab';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -89;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['16f031c8-3502-5344-7943-5308e575dbab'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1766c47d-eb50-1014-81a6-cb3b8c312d3e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -90;
  $option->label = '2004';
  $option->value = '2004';
  $option->expand = 0;
  $export['1766c47d-eb50-1014-81a6-cb3b8c312d3e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '17bc2e20-82c7-0a74-3954-3ef6a2a11fcd';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -92;
  $option->label = 'pakistanske (urdu) spillefilm';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['17bc2e20-82c7-0a74-3954-3ef6a2a11fcd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '18979d35-d983-6f54-a5af-865b1d63a273';
  $option->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $option->sort = -99;
  $option->label = 'Drama';
  $option->value = 'drama';
  $option->expand = 0;
  $export['18979d35-d983-6f54-a5af-865b1d63a273'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '19f3b22e-e59d-63c4-99b6-b4a98573c97e';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -93;
  $option->label = 'net (alle typer)';
  $option->value = 'netdokument';
  $option->expand = 0;
  $export['19f3b22e-e59d-63c4-99b6-b4a98573c97e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1a0aee2e-5c93-3f24-35a9-60eeff236e0c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -70;
  $option->label = '1984';
  $option->value = '1984';
  $option->expand = 0;
  $export['1a0aee2e-5c93-3f24-35a9-60eeff236e0c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1b046981-1e14-9d94-8160-b87e15886eac';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 12;
  $option->label = '1902';
  $option->value = '1902';
  $option->expand = 0;
  $export['1b046981-1e14-9d94-8160-b87e15886eac'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1b498e36-912b-0f34-c1a9-0211049a8671';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -92;
  $option->label = 'Fra 9 år';
  $option->value = 'Fra 9 år';
  $option->expand = 0;
  $export['1b498e36-912b-0f34-c1a9-0211049a8671'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1b75efdc-e0f7-c8f4-89be-448179ca89f1';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -3;
  $option->label = '1917';
  $option->value = '1917';
  $option->expand = 0;
  $export['1b75efdc-e0f7-c8f4-89be-448179ca89f1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1c4822cf-1ec0-3604-c9ab-65bff8120c11';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -57;
  $option->label = '1971';
  $option->value = '1971';
  $option->expand = 0;
  $export['1c4822cf-1ec0-3604-c9ab-65bff8120c11'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1d15093f-8417-b764-addc-f489fe4b8910';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -51;
  $option->label = '1965';
  $option->value = '1965';
  $option->expand = 0;
  $export['1d15093f-8417-b764-addc-f489fe4b8910'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1d2dc3d5-5041-0034-4978-969a8a8aff29';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -97;
  $option->label = '2011';
  $option->value = '2011';
  $option->expand = 0;
  $export['1d2dc3d5-5041-0034-4978-969a8a8aff29'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1d7d8c4c-d085-5954-75eb-6c4cfa278e57';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -99;
  $option->label = 'danske spillefilm';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['1d7d8c4c-d085-5954-75eb-6c4cfa278e57'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1e9b4969-c5f0-07b4-f595-2472a41000da';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 7;
  $option->label = '1907';
  $option->value = '1907';
  $option->expand = 0;
  $export['1e9b4969-c5f0-07b4-f595-2472a41000da'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '1f50dc75-6598-7864-bdea-3f68e33cd91d';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -28;
  $option->label = '1942';
  $option->value = '1942';
  $option->expand = 0;
  $export['1f50dc75-6598-7864-bdea-3f68e33cd91d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '203b38bc-1d8c-5224-c916-bef95457cb5b';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -59;
  $option->label = '1973';
  $option->value = '1973';
  $option->expand = 0;
  $export['203b38bc-1d8c-5224-c916-bef95457cb5b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2045a64a-ae7f-2324-add7-8d5afd813c62';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -76;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['2045a64a-ae7f-2324-add7-8d5afd813c62'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2107190f-3401-d544-b539-ef2dcdb61f3a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 8;
  $option->label = '1906';
  $option->value = '1906';
  $option->expand = 0;
  $export['2107190f-3401-d544-b539-ef2dcdb61f3a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2109de2d-672d-af64-81d4-2d657242335a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -60;
  $option->label = '1974';
  $option->value = '1974';
  $option->expand = 0;
  $export['2109de2d-672d-af64-81d4-2d657242335a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '21d36020-f9db-6684-c1fd-01731b882532';
  $option->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $option->sort = -100;
  $option->label = 'Americana';
  $option->value = '';
  $option->expand = 0;
  $export['21d36020-f9db-6684-c1fd-01731b882532'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2259b308-e723-d164-f122-6517f2621747';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -93;
  $option->label = 'islandsk';
  $option->value = 'islandsk';
  $option->expand = 0;
  $export['2259b308-e723-d164-f122-6517f2621747'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '23c161c7-b746-8204-85d4-16ad70e598dd';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -97;
  $option->label = 'bulgarsk';
  $option->value = 'bulgarsk';
  $option->expand = 0;
  $export['23c161c7-b746-8204-85d4-16ad70e598dd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '25877f57-598d-5824-4947-245250e6f180';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -90;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['25877f57-598d-5824-4947-245250e6f180'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '263693d5-2e81-3074-197e-517d7ab709cf';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -99;
  $option->label = 'spil på nettet';
  $option->value = 'pc-spil (net)';
  $option->expand = 0;
  $export['263693d5-2e81-3074-197e-517d7ab709cf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2801907e-8ce0-f384-9146-12c74b5ce145';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['2801907e-8ce0-f384-9146-12c74b5ce145'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '28c860c2-923c-0604-a159-1b7ee3a63654';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -93;
  $option->label = '2007';
  $option->value = '2007';
  $option->expand = 0;
  $export['28c860c2-923c-0604-a159-1b7ee3a63654'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2976af5e-9f15-d8b4-c1f1-6fbbae1bd200';
  $option->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $option->sort = -97;
  $option->label = 'Kærlighed';
  $option->value = 'kærlighed';
  $option->expand = 0;
  $export['2976af5e-9f15-d8b4-c1f1-6fbbae1bd200'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '29884278-9521-6a94-798b-6ddaf0b823c5';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -92;
  $option->label = 'net';
  $option->value = 'netdokument';
  $option->expand = 22;
  $export['29884278-9521-6a94-798b-6ddaf0b823c5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '29a1403c-ac15-1074-8536-8494d80ade18';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -85;
  $option->label = 'kinesisk';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['29a1403c-ac15-1074-8536-8494d80ade18'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2a516bda-5755-bab4-0d52-867f0c7aa951';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -27;
  $option->label = '1941';
  $option->value = '1941';
  $option->expand = 0;
  $export['2a516bda-5755-bab4-0d52-867f0c7aa951'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2af33470-40d7-4594-4563-0a4b542a754f';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -95;
  $option->label = 'artikler (alle typer)';
  $option->value = 'avisartikel OR tidsskriftartikel';
  $option->expand = 0;
  $export['2af33470-40d7-4594-4563-0a4b542a754f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2af91def-2a69-f114-dd9a-df0678b872f5';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -97;
  $option->label = 'finsk';
  $option->value = 'finsk';
  $option->expand = 0;
  $export['2af91def-2a69-f114-dd9a-df0678b872f5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2b9623b1-5ce8-4724-85da-3cf1a4a5e8f7';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -78;
  $option->label = '1992';
  $option->value = '1992';
  $option->expand = 0;
  $export['2b9623b1-5ce8-4724-85da-3cf1a4a5e8f7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2cf8dd67-bd99-3e44-8974-ee4466f3be76';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -87;
  $option->label = 'strategispil';
  $option->value = 'strategispil';
  $option->expand = 0;
  $export['2cf8dd67-bd99-3e44-8974-ee4466f3be76'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2cfac527-75f4-6764-adec-cf1c5944affb';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -95;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['2cfac527-75f4-6764-adec-cf1c5944affb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2d7932a0-7de6-3fa4-7d6e-7c334d577fa3';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -97;
  $option->label = 'eventyrspil';
  $option->value = 'eventyrspil';
  $option->expand = 0;
  $export['2d7932a0-7de6-3fa4-7d6e-7c334d577fa3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2e61a588-ef0e-15e4-2d3c-f79694ac45a5';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -94;
  $option->label = 'koreanske spillefilm';
  $option->value = 'koreansk';
  $option->expand = 0;
  $export['2e61a588-ef0e-15e4-2d3c-f79694ac45a5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2ec29a06-0719-9864-d9e0-bc4b90bd144c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 10;
  $option->label = '1904';
  $option->value = '1904';
  $option->expand = 0;
  $export['2ec29a06-0719-9864-d9e0-bc4b90bd144c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '2f5e2915-0d57-d4f4-dd17-a91548973c04';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -35;
  $option->label = '1949';
  $option->value = '1949';
  $option->expand = 0;
  $export['2f5e2915-0d57-d4f4-dd17-a91548973c04'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '30190614-1258-5c04-a5e8-0bb07f616acc';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -80;
  $option->label = 'rumænsk';
  $option->value = 'rumænsk';
  $option->expand = 0;
  $export['30190614-1258-5c04-a5e8-0bb07f616acc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3040ddf1-41e5-5c24-6522-b867a0614c40';
  $option->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $option->sort = -100;
  $option->label = 'cd - audio';
  $option->value = 'lydbog (cd)';
  $option->expand = 0;
  $export['3040ddf1-41e5-5c24-6522-b867a0614c40'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '30ab15a2-fe2d-7fb4-dd29-da80779a904f';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -95;
  $option->label = '2009';
  $option->value = '2009';
  $option->expand = 0;
  $export['30ab15a2-fe2d-7fb4-dd29-da80779a904f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '31568da0-f4a2-d094-0506-22b4e0a1aade';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -71;
  $option->label = '1985';
  $option->value = '1985';
  $option->expand = 0;
  $export['31568da0-f4a2-d094-0506-22b4e0a1aade'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '32219cbd-ab5b-9674-ed54-868599e2808d';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -97;
  $option->label = 'dvd';
  $option->value = 'dvd';
  $option->expand = 0;
  $export['32219cbd-ab5b-9674-ed54-868599e2808d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '32d21c9f-fede-d454-2d88-14d55e73cd97';
  $option->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $option->sort = -99;
  $option->label = 'dvd';
  $option->value = 'dvd';
  $option->expand = 0;
  $export['32d21c9f-fede-d454-2d88-14d55e73cd97'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '33584967-d3dc-6d34-71e8-8de6a0cf2177';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -41;
  $option->label = '1955';
  $option->value = '1955';
  $option->expand = 0;
  $export['33584967-d3dc-6d34-71e8-8de6a0cf2177'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '34683e17-33df-3184-3d85-34a0057fc820';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -98;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['34683e17-33df-3184-3d85-34a0057fc820'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '363b5072-522f-9144-a53d-55576453c68b';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -92;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['363b5072-522f-9144-a53d-55576453c68b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3771e60b-6d12-d774-d1d6-6add9469cac0';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -96;
  $option->label = 'japanske spillefilm';
  $option->value = 'japansk';
  $option->expand = 0;
  $export['3771e60b-6d12-d774-d1d6-6add9469cac0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '38f59958-f753-f0e4-fd06-00fd7917e7d5';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -74;
  $option->label = '1988';
  $option->value = '1988';
  $option->expand = 0;
  $export['38f59958-f753-f0e4-fd06-00fd7917e7d5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '39ad7ce7-54c8-bcd4-4d98-056c4033f2c3';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -14;
  $option->label = '1928';
  $option->value = '1928';
  $option->expand = 0;
  $export['39ad7ce7-54c8-bcd4-4d98-056c4033f2c3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '39c30435-a01a-0e04-45b1-4004bd66d727';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -32;
  $option->label = '1946';
  $option->value = '1946';
  $option->expand = 0;
  $export['39c30435-a01a-0e04-45b1-4004bd66d727'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a5a33e4-95c2-a2c4-41b2-b0ef8ef4c590';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -91;
  $option->label = 'Fra 10 år';
  $option->value = 'Fra 10 år';
  $option->expand = 0;
  $export['3a5a33e4-95c2-a2c4-41b2-b0ef8ef4c590'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3a808f60-29be-0be4-659b-478309bc6370';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -87;
  $option->label = 'Fra 14 år';
  $option->value = 'Fra 14 år';
  $option->expand = 0;
  $export['3a808f60-29be-0be4-659b-478309bc6370'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3ca2f771-7601-b764-39f0-7d2872b67d5b';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -73;
  $option->label = 'tjekkisk';
  $option->value = 'tjekkisk';
  $option->expand = 0;
  $export['3ca2f771-7601-b764-39f0-7d2872b67d5b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3d6a3084-b7a0-d3b4-9d7c-b78290ee8d20';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -85;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['3d6a3084-b7a0-d3b4-9d7c-b78290ee8d20'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '3dc568c5-663a-01c4-1d44-45bd54d4f939';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -98;
  $option->label = 'bosnisk';
  $option->value = 'bosnisk';
  $option->expand = 0;
  $export['3dc568c5-663a-01c4-1d44-45bd54d4f939'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '40204dc0-24e1-b294-9dc7-21230f1877f2';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -2;
  $option->label = '1916';
  $option->value = '1916';
  $option->expand = 0;
  $export['40204dc0-24e1-b294-9dc7-21230f1877f2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '40e904d2-1921-7ef4-f516-c43f5655d3a6';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -94;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['40e904d2-1921-7ef4-f516-c43f5655d3a6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '41ed645e-61ba-b264-b92c-ef41bd6bb560';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 13;
  $option->label = '1901';
  $option->value = '1901';
  $option->expand = 0;
  $export['41ed645e-61ba-b264-b92c-ef41bd6bb560'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '42d553b6-e20e-9424-1968-cd85afbc60ec';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -90;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['42d553b6-e20e-9424-1968-cd85afbc60ec'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '43e37683-b672-eda4-71b6-6d5f025a444d';
  $option->v_uuid = 'b5941eee-75d5-1d84-b5ac-1c679a3093a0';
  $option->sort = -100;
  $option->label = 'noveller';
  $option->value = 'noveller';
  $option->expand = 0;
  $export['43e37683-b672-eda4-71b6-6d5f025a444d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '44fdf7cf-0176-f5e4-7ddf-54495697e41c';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -89;
  $option->label = 'simulationspil';
  $option->value = '(simulationsspil eller managerspil)';
  $option->expand = 0;
  $export['44fdf7cf-0176-f5e4-7ddf-54495697e41c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '450c539d-639e-55a4-dd83-6e3afebbac1b';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -99;
  $option->label = 'Fra 2 år';
  $option->value = 'Fra 2 år';
  $option->expand = 0;
  $export['450c539d-639e-55a4-dd83-6e3afebbac1b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '465c584f-fd9a-aa74-619b-43701e23d740';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -91;
  $option->label = 'kinesisk';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['465c584f-fd9a-aa74-619b-43701e23d740'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '469c5c18-cb62-d994-514d-76e25d77df7b';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -87;
  $option->label = '2001';
  $option->value = '2001';
  $option->expand = 0;
  $export['469c5c18-cb62-d994-514d-76e25d77df7b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '475a911e-eabe-5514-a5ab-86da82bd6005';
  $option->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $option->sort = -98;
  $option->label = 'film på nettet';
  $option->value = 'film (net)';
  $option->expand = 0;
  $export['475a911e-eabe-5514-a5ab-86da82bd6005'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '47fc56bf-fe82-aa04-ad1e-b2448718975c';
  $option->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $option->sort = 10;
  $option->label = 'fjhfjhgfjh';
  $option->value = 'nnj';
  $option->expand = 0;
  $export['47fc56bf-fe82-aa04-ad1e-b2448718975c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '485fae5e-ec26-6094-35ab-7c5b119786cd';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -99;
  $option->label = 'cd musik';
  $option->value = 'cd (musik)';
  $option->expand = 0;
  $export['485fae5e-ec26-6094-35ab-7c5b119786cd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '48633b95-ffe9-99a4-a5c6-9dc3dec9c87b';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -78;
  $option->label = 'serbisk';
  $option->value = 'serbisk';
  $option->expand = 0;
  $export['48633b95-ffe9-99a4-a5c6-9dc3dec9c87b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '49a14c9e-2ad0-b244-b9d1-0e23e6210286';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -12;
  $option->label = '1926';
  $option->value = '1926';
  $option->expand = 0;
  $export['49a14c9e-2ad0-b244-b9d1-0e23e6210286'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4a5e0922-5161-a294-297a-e66030599218';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -82;
  $option->label = 'noder';
  $option->value = 'node';
  $option->expand = 0;
  $export['4a5e0922-5161-a294-297a-e66030599218'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4baa10a8-5f24-90a4-c5b0-5d48bff515f6';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['4baa10a8-5f24-90a4-c5b0-5d48bff515f6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4d587535-51d4-1494-ddd8-e370601ff24b';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -95;
  $option->label = 'spil på nettet';
  $option->value = 'pc-spil (net)';
  $option->expand = 0;
  $export['4d587535-51d4-1494-ddd8-e370601ff24b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4e0e04b2-3424-79e4-89c6-8c8e0faf71ad';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -93;
  $option->label = 'norske spillefilm';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['4e0e04b2-3424-79e4-89c6-8c8e0faf71ad'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4e45a559-9595-4564-81dd-1f8d315b56c1';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -6;
  $option->label = '1920';
  $option->value = '1920';
  $option->expand = 0;
  $export['4e45a559-9595-4564-81dd-1f8d315b56c1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4ebc9cf8-c603-db04-e149-e3c9cb2d5835';
  $option->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $option->sort = -96;
  $option->label = 'vhs';
  $option->value = 'video';
  $option->expand = 0;
  $export['4ebc9cf8-c603-db04-e149-e3c9cb2d5835'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4ed3ce7f-af1c-ee84-e14b-2b9ac93abc9c';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -88;
  $option->label = 'Fra 13 år';
  $option->value = 'Fra 13 år';
  $option->expand = 0;
  $export['4ed3ce7f-af1c-ee84-e14b-2b9ac93abc9c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '4ef5ae2d-f025-6b74-9d5b-996a976d56a1';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -84;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['4ef5ae2d-f025-6b74-9d5b-996a976d56a1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '500f3892-e232-97a4-d570-1ae1f28e9c16';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -4;
  $option->label = '1918';
  $option->value = '1918';
  $option->expand = 0;
  $export['500f3892-e232-97a4-d570-1ae1f28e9c16'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '521362c2-fef8-7c84-d1b0-c926a5cbd141';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -95;
  $option->label = 'leg og lær';
  $option->value = '(leg og lær eller leg)';
  $option->expand = 0;
  $export['521362c2-fef8-7c84-d1b0-c926a5cbd141'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5225c2b7-d1d8-c744-45f7-89e1169ee2d1';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -85;
  $option->label = '1999';
  $option->value = '1999';
  $option->expand = 0;
  $export['5225c2b7-d1d8-c744-45f7-89e1169ee2d1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '523b0a02-d758-35e4-396f-f6668f7dfe5a';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -97;
  $option->label = 'lydbøger';
  $option->value = 'lydbog';
  $option->expand = 31;
  $export['523b0a02-d758-35e4-396f-f6668f7dfe5a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '524b119d-5662-bf44-856a-e542b6e6140d';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -17;
  $option->label = '1931';
  $option->value = '1931';
  $option->expand = 0;
  $export['524b119d-5662-bf44-856a-e542b6e6140d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '52a113d2-b089-a824-3d08-b1d040c50f04';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['52a113d2-b089-a824-3d08-b1d040c50f04'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5319d2c8-10f5-b0f4-399e-cc4e34c2f698';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -96;
  $option->label = 'farsi';
  $option->value = 'farsi';
  $option->expand = 0;
  $export['5319d2c8-10f5-b0f4-399e-cc4e34c2f698'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5398b824-b01b-36a4-c96e-d94c7a559b79';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -13;
  $option->label = '1927';
  $option->value = '1927';
  $option->expand = 0;
  $export['5398b824-b01b-36a4-c96e-d94c7a559b79'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5511f078-5baf-9744-6d23-e6e7e4919f73';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -85;
  $option->label = 'tyske spillefilm';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['5511f078-5baf-9744-6d23-e6e7e4919f73'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '553060a7-459f-1d84-4d43-59ee93e674b2';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -96;
  $option->label = 'Fra 5 år';
  $option->value = 'Fra 5 år';
  $option->expand = 0;
  $export['553060a7-459f-1d84-4d43-59ee93e674b2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5567946c-e8ba-80b4-39f0-75b40cd54bb9';
  $option->v_uuid = 'c8194635-c911-b994-05e7-b4a3c15edeec';
  $option->sort = -99;
  $option->label = 'tidsskriftartikler';
  $option->value = 'tidsskriftartikel';
  $option->expand = 0;
  $export['5567946c-e8ba-80b4-39f0-75b40cd54bb9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '561f9eea-0738-78d4-f994-e1e755b78973';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -46;
  $option->label = '1960';
  $option->value = '1960';
  $option->expand = 0;
  $export['561f9eea-0738-78d4-f994-e1e755b78973'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5717ab86-9673-66e4-496c-3c93d70d358f';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 11;
  $option->label = '1903';
  $option->value = '1903';
  $option->expand = 0;
  $export['5717ab86-9673-66e4-496c-3c93d70d358f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '57a58f01-937a-68e4-3522-229090329839';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -88;
  $option->label = 'computerspil';
  $option->value = 'spil';
  $option->expand = 11;
  $export['57a58f01-937a-68e4-3522-229090329839'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '581c4f7a-1df0-98b4-d59c-0631cfe42d93';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -98;
  $option->label = 'stor skrift ';
  $option->value = 'stor skrift';
  $option->expand = 0;
  $export['581c4f7a-1df0-98b4-d59c-0631cfe42d93'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '59209093-3697-9144-f538-b1b9c2933b32';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -55;
  $option->label = '1969';
  $option->value = '1969';
  $option->expand = 0;
  $export['59209093-3697-9144-f538-b1b9c2933b32'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '59c4f2d5-b2d8-5154-e50b-5ad6a57d76d5';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -97;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['59c4f2d5-b2d8-5154-e50b-5ad6a57d76d5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5a3b62a5-5753-9a84-0550-83e44f894d4c';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -94;
  $option->label = 'hollandsk';
  $option->value = 'hollandsk';
  $option->expand = 0;
  $export['5a3b62a5-5753-9a84-0550-83e44f894d4c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5aa776ed-c369-8204-6190-16c1e6e2b4d8';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -83;
  $option->label = 'persisk';
  $option->value = 'persisk';
  $option->expand = 0;
  $export['5aa776ed-c369-8204-6190-16c1e6e2b4d8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5b5dc452-5025-eba4-6598-2876dc7da262';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -50;
  $option->label = '1964';
  $option->value = '1964';
  $option->expand = 0;
  $export['5b5dc452-5025-eba4-6598-2876dc7da262'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5bd413b2-51f5-21e4-bdaa-591db08cb600';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -88;
  $option->label = 'portugisisk';
  $option->value = 'portugisisk';
  $option->expand = 0;
  $export['5bd413b2-51f5-21e4-bdaa-591db08cb600'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5c24dfb1-27bf-e384-ed9b-f8d6773f04a2';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -8;
  $option->label = '1922';
  $option->value = '1922';
  $option->expand = 0;
  $export['5c24dfb1-27bf-e384-ed9b-f8d6773f04a2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5c32def8-b5a7-d5b4-21ea-577a8cab6bb5';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -96;
  $option->label = 'hovedbrudsspil';
  $option->value = '(hovedbrudsspil eller brætspil eller quiz eller puslespil)';
  $option->expand = 0;
  $export['5c32def8-b5a7-d5b4-21ea-577a8cab6bb5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '5df6803c-1dd8-0f04-1d00-df74ae4c3dc3';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -95;
  $option->label = 'lydbøger på nettet';
  $option->value = 'lydbog (net)';
  $option->expand = 0;
  $export['5df6803c-1dd8-0f04-1d00-df74ae4c3dc3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '60815bd4-b968-98e4-f14f-b94be66e778d';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -94;
  $option->label = 'kassettebånd';
  $option->value = 'bånd';
  $option->expand = 0;
  $export['60815bd4-b968-98e4-f14f-b94be66e778d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '65a978ce-6aab-3ca4-69f9-5894d821e5cc';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -89;
  $option->label = 'serbiske spillefilm';
  $option->value = 'serbisk';
  $option->expand = 0;
  $export['65a978ce-6aab-3ca4-69f9-5894d821e5cc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '65c77b70-586d-6b64-1967-0cdd7e6a1d41';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -99;
  $option->label = 'bøger (alle typer)';
  $option->value = 'bog';
  $option->expand = 0;
  $export['65c77b70-586d-6b64-1967-0cdd7e6a1d41'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '661b481b-7ec2-1594-296e-d63be4215e9b';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -69;
  $option->label = 'urdu';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['661b481b-7ec2-1594-296e-d63be4215e9b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '666bf2c0-3abc-ee74-ed0b-5186813ff031';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -88;
  $option->label = '2002';
  $option->value = '2002';
  $option->expand = 0;
  $export['666bf2c0-3abc-ee74-ed0b-5186813ff031'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '67162c01-5e0c-3c24-fdfa-54ab35c82160';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -91;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['67162c01-5e0c-3c24-fdfa-54ab35c82160'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '67470038-6add-db84-c947-d9f7b61909c0';
  $option->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $option->sort = 10;
  $option->label = 'År efter';
  $option->value = 'year_gt';
  $option->expand = 0;
  $export['67470038-6add-db84-c947-d9f7b61909c0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '677e61e6-a37b-8104-f90d-83e7f6a8bc6c';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -89;
  $option->label = 'polsk';
  $option->value = 'polsk';
  $option->expand = 0;
  $export['677e61e6-a37b-8104-f90d-83e7f6a8bc6c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '685bbdf7-24f6-9ad4-f9f5-a6308bba5c23';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 4;
  $option->label = '1910';
  $option->value = '1910';
  $option->expand = 0;
  $export['685bbdf7-24f6-9ad4-f9f5-a6308bba5c23'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '69a2d263-7c13-eff4-9927-70ed3fe6168b';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -84;
  $option->label = 'Fra 17 år';
  $option->value = 'Fra 17 år';
  $option->expand = 0;
  $export['69a2d263-7c13-eff4-9927-70ed3fe6168b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '69f7da70-7cf8-9444-151b-c7e53d1151b7';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -86;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['69f7da70-7cf8-9444-151b-c7e53d1151b7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6b7cbe2f-6f35-e6a4-b9de-b8ae5e99e7f2';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -77;
  $option->label = '1991';
  $option->value = '1991';
  $option->expand = 0;
  $export['6b7cbe2f-6f35-e6a4-b9de-b8ae5e99e7f2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6d7ba582-7a3a-3394-ddd5-6033d4ad5924';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -53;
  $option->label = '1967';
  $option->value = '1967';
  $option->expand = 0;
  $export['6d7ba582-7a3a-3394-ddd5-6033d4ad5924'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6dc7f291-3837-b1a4-0516-58fec70f88f2';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -91;
  $option->label = 'rollespil';
  $option->value = 'rollespil';
  $option->expand = 0;
  $export['6dc7f291-3837-b1a4-0516-58fec70f88f2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6ebf2c9c-93af-8104-85e2-8ba162b5a38e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -75;
  $option->label = '1989';
  $option->value = '1989';
  $option->expand = 0;
  $export['6ebf2c9c-93af-8104-85e2-8ba162b5a38e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '6ff537e7-26ac-7984-81c2-c3300ea52d10';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 9;
  $option->label = '1905';
  $option->value = '1905';
  $option->expand = 0;
  $export['6ff537e7-26ac-7984-81c2-c3300ea52d10'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '70581deb-b683-a214-2d03-504ef904b266';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -56;
  $option->label = '1970';
  $option->value = '1970';
  $option->expand = 0;
  $export['70581deb-b683-a214-2d03-504ef904b266'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '70de0b2a-fbf9-80d4-7994-9d2dbbb294cf';
  $option->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $option->sort = -99;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['70de0b2a-fbf9-80d4-7994-9d2dbbb294cf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7119d2d2-90e9-e534-698f-a512e134c43f';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -23;
  $option->label = '1937';
  $option->value = '1937';
  $option->expand = 0;
  $export['7119d2d2-90e9-e534-698f-a512e134c43f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7267f4ac-1f15-ddd4-d143-7016db4fc756';
  $option->v_uuid = 'c7eee360-43fc-0614-3de3-52609300d946';
  $option->sort = 10;
  $option->label = 'Skønlitteratur';
  $option->value = 'fiktion';
  $option->expand = 4;
  $export['7267f4ac-1f15-ddd4-d143-7016db4fc756'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '72fdb7ee-ca12-b704-a94f-56027a5c486a';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -87;
  $option->label = 'islandsk';
  $option->value = 'islandsk';
  $option->expand = 0;
  $export['72fdb7ee-ca12-b704-a94f-56027a5c486a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '73f37c9c-5aaf-3124-b523-f9c4070288cf';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -96;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['73f37c9c-5aaf-3124-b523-f9c4070288cf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '741a4289-14f6-56a4-15c1-535144358363';
  $option->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $option->sort = -98;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['741a4289-14f6-56a4-15c1-535144358363'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '76860f3c-1f46-0d04-eda5-55cd2df0e48c';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -100;
  $option->label = 'Alle typer materiale';
  $option->value = '';
  $option->expand = 0;
  $export['76860f3c-1f46-0d04-eda5-55cd2df0e48c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '769a9019-7aac-2ca4-0513-d46b5616fe95';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -87;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['769a9019-7aac-2ca4-0513-d46b5616fe95'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '77f59509-c730-a374-bdbd-57d1a1b929c7';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -98;
  $option->label = 'tekster på nettet';
  $option->value = 'netdokument';
  $option->expand = 0;
  $export['77f59509-c730-a374-bdbd-57d1a1b929c7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '784d309b-e68f-41f4-2d0b-5f18f2dff64c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -94;
  $option->label = '2008';
  $option->value = '2008';
  $option->expand = 0;
  $export['784d309b-e68f-41f4-2d0b-5f18f2dff64c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '792624bc-25ad-0d74-2d69-86ff1d9f088c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -68;
  $option->label = '1982';
  $option->value = '1982';
  $option->expand = 0;
  $export['792624bc-25ad-0d74-2d69-86ff1d9f088c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7965316b-8362-ff94-c194-71b9ac609e5d';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -92;
  $option->label = 'spansk';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['7965316b-8362-ff94-c194-71b9ac609e5d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7a021d0d-3ab7-0e54-0923-3cf720767d64';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -94;
  $option->label = 'farsi';
  $option->value = 'farsi';
  $option->expand = 0;
  $export['7a021d0d-3ab7-0e54-0923-3cf720767d64'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7afc1da0-2d4c-e424-b1c4-d646c0e4e918';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -90;
  $option->label = 'russiske spillefilm';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['7afc1da0-2d4c-e424-b1c4-d646c0e4e918'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7b1815bc-2b6f-4464-1dac-5985ef6c67fa';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -96;
  $option->label = 'video';
  $option->value = 'video';
  $option->expand = 0;
  $export['7b1815bc-2b6f-4464-1dac-5985ef6c67fa'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7d62b2fa-e2e6-73b4-ed60-18d6e2af960e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -31;
  $option->label = '1945';
  $option->value = '1945';
  $option->expand = 0;
  $export['7d62b2fa-e2e6-73b4-ed60-18d6e2af960e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7e1d6564-7759-1e74-4535-f158209d2474';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -98;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['7e1d6564-7759-1e74-4535-f158209d2474'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7e23fccf-8d50-1e04-7996-950ab82e4ab4';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 3;
  $option->label = '1911';
  $option->value = '1911';
  $option->expand = 0;
  $export['7e23fccf-8d50-1e04-7996-950ab82e4ab4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7e3f93f9-f5a3-f464-bdbb-5fb2e81ca492';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -89;
  $option->label = 'hebræisk';
  $option->value = 'hebræisk';
  $option->expand = 0;
  $export['7e3f93f9-f5a3-f464-bdbb-5fb2e81ca492'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7ef8afcf-238c-4954-7dcf-9112a64e4bc9';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -87;
  $option->label = 'cd-rom - men ikke spil';
  $option->value = 'cd-rom';
  $option->expand = 0;
  $export['7ef8afcf-238c-4954-7dcf-9112a64e4bc9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '7fd4aa31-ff5c-a514-e5f0-66f56ad3221c';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -94;
  $option->label = 'lydbøger - NOTA';
  $option->value = 'nota';
  $option->expand = 0;
  $export['7fd4aa31-ff5c-a514-e5f0-66f56ad3221c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '810b8527-e363-4054-4902-96871d95c8d9';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -98;
  $option->label = 'engelsk';
  $option->value = 'engelsk';
  $option->expand = 0;
  $export['810b8527-e363-4054-4902-96871d95c8d9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '814a4741-5ab7-bf94-ad88-43ed68ae8f3e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -44;
  $option->label = '1958';
  $option->value = '1958';
  $option->expand = 0;
  $export['814a4741-5ab7-bf94-ad88-43ed68ae8f3e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8174a2c0-c5e6-5b44-25bd-023979d52c59';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -81;
  $option->label = '1995';
  $option->value = '1995';
  $option->expand = 0;
  $export['8174a2c0-c5e6-5b44-25bd-023979d52c59'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '82fd7976-5fa7-2414-1534-3043b67845a5';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -21;
  $option->label = '1935';
  $option->value = '1935';
  $option->expand = 0;
  $export['82fd7976-5fa7-2414-1534-3043b67845a5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '834c239d-39c2-efa4-69bc-394686888ce4';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -82;
  $option->label = '1996';
  $option->value = '1996';
  $option->expand = 0;
  $export['834c239d-39c2-efa4-69bc-394686888ce4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8499e2d5-0564-1fd4-d10c-4f8e113043b3';
  $option->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $option->sort = -100;
  $option->label = 'Alle typer';
  $option->value = '';
  $option->expand = 0;
  $export['8499e2d5-0564-1fd4-d10c-4f8e113043b3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8504037b-d99e-d194-79fa-ba2de7e4e7e5';
  $option->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $option->sort = -97;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['8504037b-d99e-d194-79fa-ba2de7e4e7e5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '861aaa8c-6759-fe04-0965-6f23217cd50b';
  $option->v_uuid = 'b5941eee-75d5-1d84-b5ac-1c679a3093a0';
  $option->sort = -97;
  $option->label = 'digte';
  $option->value = 'digte';
  $option->expand = 0;
  $export['861aaa8c-6759-fe04-0965-6f23217cd50b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '867139ab-3461-d294-a199-019538966d43';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -22;
  $option->label = '1936';
  $option->value = '1936';
  $option->expand = 0;
  $export['867139ab-3461-d294-a199-019538966d43'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '86cfdcf1-7676-1b84-c51b-a35cd528bcbc';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -99;
  $option->label = 'Fra 2 år';
  $option->value = 'Fra 2 år';
  $option->expand = 0;
  $export['86cfdcf1-7676-1b84-c51b-a35cd528bcbc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '87928693-093c-b224-0de4-8d76addf0862';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -33;
  $option->label = '1947';
  $option->value = '1947';
  $option->expand = 0;
  $export['87928693-093c-b224-0de4-8d76addf0862'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '87d6ff09-0a5c-b9e4-3947-4b786e74659c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -26;
  $option->label = '1940';
  $option->value = '1940';
  $option->expand = 0;
  $export['87d6ff09-0a5c-b9e4-3947-4b786e74659c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '883992cf-3bf0-9454-5d46-830c1388a05f';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -81;
  $option->label = 'urdu';
  $option->value = 'urdu';
  $option->expand = 0;
  $export['883992cf-3bf0-9454-5d46-830c1388a05f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '88e26865-a2b8-6964-2909-010041f746eb';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -100;
  $option->label = 'Alle typer musik';
  $option->value = '';
  $option->expand = 0;
  $export['88e26865-a2b8-6964-2909-010041f746eb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8941c8cc-b99d-1254-79dd-1e41dd33a77c';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -89;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['8941c8cc-b99d-1254-79dd-1e41dd33a77c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '895daae9-415a-b964-1d91-b8d73321d79d';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -73;
  $option->label = '1987';
  $option->value = '1987';
  $option->expand = 0;
  $export['895daae9-415a-b964-1d91-b8d73321d79d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8a2c70df-f3d6-0d54-9982-fc69485070c1';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -93;
  $option->label = 'xbox';
  $option->value = 'xbox';
  $option->expand = 0;
  $export['8a2c70df-f3d6-0d54-9982-fc69485070c1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8ab20553-6772-1774-1d7e-57a22eb3e7ae';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -82;
  $option->label = 'polsk';
  $option->value = 'polsk';
  $option->expand = 0;
  $export['8ab20553-6772-1774-1d7e-57a22eb3e7ae'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8b6b34e7-b6fa-5e44-b133-bf848f3fd4dc';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -30;
  $option->label = '1944';
  $option->value = '1944';
  $option->expand = 0;
  $export['8b6b34e7-b6fa-5e44-b133-bf848f3fd4dc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8bac72b6-c76e-4874-0560-4eba513ec8b6';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -88;
  $option->label = 'spanske og latinamerikanske spillefilm';
  $option->value = 'spansk';
  $option->expand = 0;
  $export['8bac72b6-c76e-4874-0560-4eba513ec8b6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8c80cf8e-2462-95c4-d50b-fde2bb331fbd';
  $option->v_uuid = 'c19cb357-2094-1a84-0d8b-d96e4ec1b698';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = 'alle';
  $option->expand = 0;
  $export['8c80cf8e-2462-95c4-d50b-fde2bb331fbd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8ca74bfc-5935-0224-0dea-422b3089d5fe';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -95;
  $option->label = 'grammofonplader';
  $option->value = 'grammofonplade';
  $option->expand = 0;
  $export['8ca74bfc-5935-0224-0dea-422b3089d5fe'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8d5714b9-6c5d-0bc4-216e-4067f0a4f8e2';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -89;
  $option->label = 'computerspil (alle)';
  $option->value = 'spil';
  $option->expand = 0;
  $export['8d5714b9-6c5d-0bc4-216e-4067f0a4f8e2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8e00446d-ecd6-8424-795c-e0170995df22';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -86;
  $option->label = 'film (alle typer)';
  $option->value = 'film';
  $option->expand = 0;
  $export['8e00446d-ecd6-8424-795c-e0170995df22'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8e03add2-c68e-b414-4190-912fa86427e1';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -87;
  $option->label = 'svenske spillefilm';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['8e03add2-c68e-b414-4190-912fa86427e1'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8e2bd1cd-9148-c764-6940-062662bc0ad4';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -72;
  $option->label = 'tyrkisk';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['8e2bd1cd-9148-c764-6940-062662bc0ad4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8eaa92ce-05eb-9964-fd67-9c2e47512f4e';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -98;
  $option->label = 'franske spillefilm';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['8eaa92ce-05eb-9964-fd67-9c2e47512f4e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8ed424f7-232c-6fd4-41f9-a246ca73ff79';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -72;
  $option->label = '1986';
  $option->value = '1986';
  $option->expand = 0;
  $export['8ed424f7-232c-6fd4-41f9-a246ca73ff79'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '8fc9ca12-aec5-a504-4d9d-eb733d352edb';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -83;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['8fc9ca12-aec5-a504-4d9d-eb733d352edb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9170c6f8-ab9e-c904-694e-ea313c35fa4f';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -100;
  $option->label = 'Biblioteket anbefaler';
  $option->value = '';
  $option->expand = 0;
  $export['9170c6f8-ab9e-c904-694e-ea313c35fa4f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9224b548-20da-d374-81ac-8038542bf17d';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -90;
  $option->label = 'lydbøger';
  $option->value = 'lydbog';
  $option->expand = 31;
  $export['9224b548-20da-d374-81ac-8038542bf17d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '939aec3b-c94c-61c4-c507-428cc5bf07d8';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 5;
  $option->label = '1909';
  $option->value = '1909';
  $option->expand = 0;
  $export['939aec3b-c94c-61c4-c507-428cc5bf07d8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '93f55cda-aa16-6d24-f9bd-508fd0aea1cd';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -91;
  $option->label = 'lydbøger (alle typer)';
  $option->value = 'lydbog';
  $option->expand = 0;
  $export['93f55cda-aa16-6d24-f9bd-508fd0aea1cd'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '958dfa17-69c2-67a4-c5ae-e2e3dfcaf9b2';
  $option->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $option->sort = -97;
  $option->label = 'osv';
  $option->value = '';
  $option->expand = 0;
  $export['958dfa17-69c2-67a4-c5ae-e2e3dfcaf9b2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '95d06435-f75b-0b54-1d20-145533fe7c51';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -54;
  $option->label = '1968';
  $option->value = '1968';
  $option->expand = 0;
  $export['95d06435-f75b-0b54-1d20-145533fe7c51'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9860443a-71a7-a944-05b5-0d8397aa7140';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -97;
  $option->label = 'italienske spillefilm';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['9860443a-71a7-a944-05b5-0d8397aa7140'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9c1c9659-691d-7fe4-d9e4-f46435e54b61';
  $option->v_uuid = 'b5941eee-75d5-1d84-b5ac-1c679a3093a0';
  $option->sort = -99;
  $option->label = 'romaner';
  $option->value = 'romaner';
  $option->expand = 0;
  $export['9c1c9659-691d-7fe4-d9e4-f46435e54b61'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9c46f464-647e-2634-e59c-c753d78a7f4a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -39;
  $option->label = '1953';
  $option->value = '1953';
  $option->expand = 0;
  $export['9c46f464-647e-2634-e59c-c753d78a7f4a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9c6814ee-4159-5a04-71f6-f4357a783579';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -65;
  $option->label = '1979';
  $option->value = '1979';
  $option->expand = 0;
  $export['9c6814ee-4159-5a04-71f6-f4357a783579'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9c774ee0-d3e8-01c4-79ba-716638362682';
  $option->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $option->sort = 10;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['9c774ee0-d3e8-01c4-79ba-716638362682'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9d2429bd-e805-69d4-0945-18cc95f318fa';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -89;
  $option->label = '2003';
  $option->value = '2003';
  $option->expand = 0;
  $export['9d2429bd-e805-69d4-0945-18cc95f318fa'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e058a84-3d01-feb4-b197-ff9e73262c1a';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -86;
  $option->label = 'tyrkiske spillefilm';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['9e058a84-3d01-feb4-b197-ff9e73262c1a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e39dce9-7d47-e434-2d91-16eea11b9e5b';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -99;
  $option->label = 'arabisk';
  $option->value = 'arabisk';
  $option->expand = 0;
  $export['9e39dce9-7d47-e434-2d91-16eea11b9e5b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e60b287-550e-fe14-a145-5d4ccc44cb57';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -92;
  $option->label = 'Fra 9 år';
  $option->value = 'Fra 9 år';
  $option->expand = 0;
  $export['9e60b287-550e-fe14-a145-5d4ccc44cb57'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e7ec56b-2672-3844-a150-5008dbb2e838';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -90;
  $option->label = 'shooters';
  $option->value = 'shooters';
  $option->expand = 0;
  $export['9e7ec56b-2672-3844-a150-5008dbb2e838'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = '9e99df20-894e-47b4-cdf7-037bf8005653';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -95;
  $option->label = 'kinesiske spillefilm';
  $option->value = 'kinesisk';
  $option->expand = 0;
  $export['9e99df20-894e-47b4-cdf7-037bf8005653'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a0a7e6f7-81f6-b324-8175-3ccc87566710';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -94;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['a0a7e6f7-81f6-b324-8175-3ccc87566710'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a0b86106-7557-2244-d5d2-2263bf6e3691';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -90;
  $option->label = 'grønlandsk';
  $option->value = 'grønlandsk';
  $option->expand = 0;
  $export['a0b86106-7557-2244-d5d2-2263bf6e3691'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a0dc556a-6987-d5c4-75fb-ac8452430643';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -97;
  $option->label = 'Fra 4 år';
  $option->value = 'Fra 4 år';
  $option->expand = 0;
  $export['a0dc556a-6987-d5c4-75fb-ac8452430643'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a48114fd-25aa-a864-d521-a8ddf27257f9';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['a48114fd-25aa-a864-d521-a8ddf27257f9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a54a11fb-b66a-7c74-3505-0d977dc3505f';
  $option->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $option->sort = -100;
  $option->label = 'Tilladt for alle';
  $option->value = '';
  $option->expand = 0;
  $export['a54a11fb-b66a-7c74-3505-0d977dc3505f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a64f6386-5877-0ca4-c557-1db3b62a5aed';
  $option->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $option->sort = 10;
  $option->label = 'År før';
  $option->value = 'year_lt';
  $option->expand = 0;
  $export['a64f6386-5877-0ca4-c557-1db3b62a5aed'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a6aa19dc-3098-2084-8920-4906b80de9ec';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -98;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['a6aa19dc-3098-2084-8920-4906b80de9ec'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'a96310bb-c679-4444-591f-b82fe1476c98';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['a96310bb-c679-4444-591f-b82fe1476c98'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ad748cba-52ed-32d4-959b-0b889f19b63e';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -45;
  $option->label = '1959';
  $option->value = '1959';
  $option->expand = 0;
  $export['ad748cba-52ed-32d4-959b-0b889f19b63e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'addd750f-fe9c-a1b4-91f1-c985ea1c8347';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -18;
  $option->label = '1932';
  $option->value = '1932';
  $option->expand = 0;
  $export['addd750f-fe9c-a1b4-91f1-c985ea1c8347'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b0ea5727-23ab-5914-05f9-5486e5216f42';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -10;
  $option->label = '1924';
  $option->value = '1924';
  $option->expand = 0;
  $export['b0ea5727-23ab-5914-05f9-5486e5216f42'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b12171a9-51fe-46b4-59da-15d9bbefaca5';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -92;
  $option->label = 'italiensk';
  $option->value = 'italiensk';
  $option->expand = 0;
  $export['b12171a9-51fe-46b4-59da-15d9bbefaca5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b23ee525-a36b-27d4-75f2-6819ba785138';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -100;
  $option->label = 'PEGI aldersmærkning';
  $option->value = '';
  $option->expand = 0;
  $export['b23ee525-a36b-27d4-75f2-6819ba785138'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b259c7c5-aa08-4314-6536-350f205619bb';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -97;
  $option->label = 'playstation 3';
  $option->value = 'playstation 3';
  $option->expand = 0;
  $export['b259c7c5-aa08-4314-6536-350f205619bb'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b2f166b8-8208-3a84-9d7a-e58cd94177d6';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -24;
  $option->label = '1938';
  $option->value = '1938';
  $option->expand = 0;
  $export['b2f166b8-8208-3a84-9d7a-e58cd94177d6'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b47aad84-c966-3184-557d-dc2c9d96fcea';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -79;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['b47aad84-c966-3184-557d-dc2c9d96fcea'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b4907359-3aa7-90f4-6981-01ee846e8ec5';
  $option->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $option->sort = -97;
  $option->label = 'blu-ray';
  $option->value = 'blu-ray';
  $option->expand = 0;
  $export['b4907359-3aa7-90f4-6981-01ee846e8ec5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b4c9e9af-0a6f-4454-3561-b8466a70a354';
  $option->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $option->sort = -96;
  $option->label = 'fra NOTA';
  $option->value = 'nota';
  $option->expand = 0;
  $export['b4c9e9af-0a6f-4454-3561-b8466a70a354'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b51d1fc5-3ea2-36a4-ed3c-8478c4847289';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -5;
  $option->label = '1919';
  $option->value = '1919';
  $option->expand = 0;
  $export['b51d1fc5-3ea2-36a4-ed3c-8478c4847289'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b570c1f5-fe86-ed54-5d93-4283f50c2a57';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -97;
  $option->label = 'Fra 4 år';
  $option->value = 'Fra 4 år';
  $option->expand = 0;
  $export['b570c1f5-fe86-ed54-5d93-4283f50c2a57'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b5c5296c-a5c0-c504-edb2-7e1fc5a13476';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -100;
  $option->label = 'Alle platforme';
  $option->value = '';
  $option->expand = 0;
  $export['b5c5296c-a5c0-c504-edb2-7e1fc5a13476'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b6d1e4b6-1849-7184-e17c-882657f32430';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -90;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['b6d1e4b6-1849-7184-e17c-882657f32430'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b7c9577a-715e-1474-39b9-eaae61feee85';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -79;
  $option->label = '1993';
  $option->value = '1993';
  $option->expand = 0;
  $export['b7c9577a-715e-1474-39b9-eaae61feee85'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b7dda991-881a-21b4-2149-33db9f04c6f8';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -25;
  $option->label = '1939';
  $option->value = '1939';
  $option->expand = 0;
  $export['b7dda991-881a-21b4-2149-33db9f04c6f8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b8144002-18e8-ff74-15a1-143a8e8478e5';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -80;
  $option->label = '1994';
  $option->value = '1994';
  $option->expand = 0;
  $export['b8144002-18e8-ff74-15a1-143a8e8478e5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b820e475-93e4-b294-dd95-47c3fe937562';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -94;
  $option->label = 'Fra 7 år';
  $option->value = 'Fra 7 år';
  $option->expand = 0;
  $export['b820e475-93e4-b294-dd95-47c3fe937562'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b8aa1209-cd4d-9b54-296c-76808815a7dc';
  $option->v_uuid = 'c8194635-c911-b994-05e7-b4a3c15edeec';
  $option->sort = -100;
  $option->label = 'artikler på nettet';
  $option->value = '';
  $option->expand = 0;
  $export['b8aa1209-cd4d-9b54-296c-76808815a7dc'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b912ba5a-74c2-4ea4-7910-0be73ab804d3';
  $option->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $option->sort = -99;
  $option->label = 'cd - mp3';
  $option->value = 'lydbog (cd-mp3)';
  $option->expand = 0;
  $export['b912ba5a-74c2-4ea4-7910-0be73ab804d3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b943773f-7d87-8f24-95ed-effd38b62d4a';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -98;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['b943773f-7d87-8f24-95ed-effd38b62d4a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'b95852b4-2ec4-d2d4-b9d5-c1f23d960330';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -37;
  $option->label = '1951';
  $option->value = '1951';
  $option->expand = 0;
  $export['b95852b4-2ec4-d2d4-b9d5-c1f23d960330'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bba97030-5d86-16e4-9d50-49d0ba746447';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -83;
  $option->label = 'Fra 18 år';
  $option->value = 'Fra 18 år';
  $option->expand = 0;
  $export['bba97030-5d86-16e4-9d50-49d0ba746447'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bc266ff3-a3d8-7d94-91d5-e9e624eedb40';
  $option->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $option->sort = -96;
  $option->label = 'Tv-serier';
  $option->value = 'tvserier';
  $option->expand = 0;
  $export['bc266ff3-a3d8-7d94-91d5-e9e624eedb40'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bc839c6b-b967-6174-0d98-6cd863bf3efa';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -83;
  $option->label = '1997';
  $option->value = '1997';
  $option->expand = 0;
  $export['bc839c6b-b967-6174-0d98-6cd863bf3efa'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bca9756b-aa97-0d94-315d-30825e3682ba';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -64;
  $option->label = '1978';
  $option->value = '1978';
  $option->expand = 0;
  $export['bca9756b-aa97-0d94-315d-30825e3682ba'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bfb467c1-3581-eba4-a5c2-69cef25f46f8';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -87;
  $option->label = 'Fra 14 år';
  $option->value = 'Fra 14 år';
  $option->expand = 0;
  $export['bfb467c1-3581-eba4-a5c2-69cef25f46f8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'bfc44a81-0ea2-b974-c9dd-4c272e5f3e49';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -93;
  $option->label = 'noder på nettet';
  $option->value = 'noder';
  $option->expand = 0;
  $export['bfc44a81-0ea2-b974-c9dd-4c272e5f3e49'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c049c088-3de3-4a44-21e2-0ee5ae1e743f';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -100;
  $option->label = 'alle';
  $option->value = '';
  $option->expand = 0;
  $export['c049c088-3de3-4a44-21e2-0ee5ae1e743f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c13c2529-0d35-6f54-713c-51bb3c9a3cc7';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -9;
  $option->label = '1923';
  $option->value = '1923';
  $option->expand = 0;
  $export['c13c2529-0d35-6f54-713c-51bb3c9a3cc7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c2bdb4dc-c770-2584-01f4-5fd679385b5b';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -88;
  $option->label = 'sportsspil';
  $option->value = 'sportsspil';
  $option->expand = 0;
  $export['c2bdb4dc-c770-2584-01f4-5fd679385b5b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c330b689-6874-9274-2d4a-141e186cb306';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -91;
  $option->label = 'færøsk';
  $option->value = 'færøsk';
  $option->expand = 0;
  $export['c330b689-6874-9274-2d4a-141e186cb306'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c362591e-2856-4be4-f1ef-89e99ab832ec';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -1;
  $option->label = '1915';
  $option->value = '1915';
  $option->expand = 0;
  $export['c362591e-2856-4be4-f1ef-89e99ab832ec'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c399d5f6-0a79-bc54-21d7-50417afc2213';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -85;
  $option->label = 'film';
  $option->value = 'film';
  $option->expand = 19;
  $export['c399d5f6-0a79-bc54-21d7-50417afc2213'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c3f5e883-671b-08b4-ed79-bd356e717d4a';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -97;
  $option->label = 'Fra 12 år';
  $option->value = 'Fra 12 år';
  $option->expand = 0;
  $export['c3f5e883-671b-08b4-ed79-bd356e717d4a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c42a14cc-a42e-bd04-ad20-0df75c780064';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -96;
  $option->label = 'film på nettet';
  $option->value = 'film';
  $option->expand = 0;
  $export['c42a14cc-a42e-bd04-ad20-0df75c780064'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c44630e7-f8eb-b014-1956-6cd39d4f5780';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -42;
  $option->label = '1956';
  $option->value = '1956';
  $option->expand = 0;
  $export['c44630e7-f8eb-b014-1956-6cd39d4f5780'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c46fa5dc-d8ff-f274-8dc8-0fd7b8939206';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -84;
  $option->label = 'tyrkisk';
  $option->value = 'tyrkisk';
  $option->expand = 0;
  $export['c46fa5dc-d8ff-f274-8dc8-0fd7b8939206'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c4a578d0-1ada-5494-ed72-02018e66a149';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -74;
  $option->label = 'thai';
  $option->value = 'thai';
  $option->expand = 0;
  $export['c4a578d0-1ada-5494-ed72-02018e66a149'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c5e569f9-3439-7044-75e7-428cb98dcc7b';
  $option->v_uuid = 'b5941eee-75d5-1d84-b5ac-1c679a3093a0';
  $option->sort = -98;
  $option->label = 'tegneserier';
  $option->value = 'tegneserier';
  $option->expand = 0;
  $export['c5e569f9-3439-7044-75e7-428cb98dcc7b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c5f7e5ed-30b8-ec04-11e7-88380bcd4199';
  $option->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $option->sort = -98;
  $option->label = 'Blues';
  $option->value = '';
  $option->expand = 0;
  $export['c5f7e5ed-30b8-ec04-11e7-88380bcd4199'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c6432c0c-444b-fc24-0d06-2859b3dd815b';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -63;
  $option->label = '1977';
  $option->value = '1977';
  $option->expand = 0;
  $export['c6432c0c-444b-fc24-0d06-2859b3dd815b'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c688d073-b44a-f214-a5f1-ac2a0797d832';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -92;
  $option->label = 'racerspil';
  $option->value = 'racerspil';
  $option->expand = 0;
  $export['c688d073-b44a-f214-a5f1-ac2a0797d832'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c759828b-c2f8-77e4-7545-eaf23eb688a8';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -19;
  $option->label = '1933';
  $option->value = '1933';
  $option->expand = 0;
  $export['c759828b-c2f8-77e4-7545-eaf23eb688a8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c7d0666b-e764-9254-f1f1-8a9cc25f2990';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -98;
  $option->label = 'bøger';
  $option->value = 'bog';
  $option->expand = 5;
  $export['c7d0666b-e764-9254-f1f1-8a9cc25f2990'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'c894b244-ab1b-2924-d547-f7c423560741';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -98;
  $option->label = 'playstation 2';
  $option->value = 'playstation 2';
  $option->expand = 0;
  $export['c894b244-ab1b-2924-d547-f7c423560741'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cb6dd2dc-446d-ccc4-6585-8cbd0a939625';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -94;
  $option->label = 'minispil';
  $option->value = 'minispil';
  $option->expand = 0;
  $export['cb6dd2dc-446d-ccc4-6585-8cbd0a939625'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cb6f294d-ad96-0b14-c5c2-778f55b860f0';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -43;
  $option->label = '1957';
  $option->value = '1957';
  $option->expand = 0;
  $export['cb6f294d-ad96-0b14-c5c2-778f55b860f0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cbe77f0c-8e43-6934-c531-582cac7559be';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -95;
  $option->label = 'Fra 6 år';
  $option->value = 'Fra 6 år';
  $option->expand = 0;
  $export['cbe77f0c-8e43-6934-c531-582cac7559be'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cc3b8e82-8cbe-95f4-a99a-d2fda8fa3036';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -93;
  $option->label = 'Fra 8 år';
  $option->value = 'Fra 8 år';
  $option->expand = 0;
  $export['cc3b8e82-8cbe-95f4-a99a-d2fda8fa3036'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cd2f3f65-0ec5-5934-3528-550a4f6a73c4';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -95;
  $option->label = 'e-bøger';
  $option->value = 'ebog';
  $option->expand = 0;
  $export['cd2f3f65-0ec5-5934-3528-550a4f6a73c4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cf0ee98c-3f04-8f24-3586-0b3d2457b9f2';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -95;
  $option->label = 'Fra 6 år';
  $option->value = 'Fra 6 år';
  $option->expand = 0;
  $export['cf0ee98c-3f04-8f24-3586-0b3d2457b9f2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cfd13540-119f-5d44-8d8b-b11d4c6ab5c7';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -100;
  $option->label = 'Biblioteket anbefaler';
  $option->value = '';
  $option->expand = 0;
  $export['cfd13540-119f-5d44-8d8b-b11d4c6ab5c7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'cffeb524-34e3-faf4-b192-b20b23f4a0c5';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -93;
  $option->label = 'norsk';
  $option->value = 'norsk';
  $option->expand = 0;
  $export['cffeb524-34e3-faf4-b192-b20b23f4a0c5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd07b1085-0c82-8684-a1b6-50e19c74db3a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 6;
  $option->label = '1908';
  $option->value = '1908';
  $option->expand = 0;
  $export['d07b1085-0c82-8684-a1b6-50e19c74db3a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd1849583-1deb-0654-69f9-e57419bb423c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 1;
  $option->label = '1913';
  $option->value = '1913';
  $option->expand = 0;
  $export['d1849583-1deb-0654-69f9-e57419bb423c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd1903893-93f8-bfd4-7d1c-c4dc39a76eee';
  $option->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $option->sort = -98;
  $option->label = 'musik på nettet';
  $option->value = 'musik (net)';
  $option->expand = 0;
  $export['d1903893-93f8-bfd4-7d1c-c4dc39a76eee'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd2ede55d-c20f-5f24-213a-e5dc6f3c16ab';
  $option->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $option->sort = -98;
  $option->label = 'Krimi';
  $option->value = 'krimi';
  $option->expand = 0;
  $export['d2ede55d-c20f-5f24-213a-e5dc6f3c16ab'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd3004b82-044e-8224-39f9-229e131fdd8a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -98;
  $option->label = '2012';
  $option->value = '2012';
  $option->expand = 0;
  $export['d3004b82-044e-8224-39f9-229e131fdd8a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd3bb9fee-2265-cf94-9168-c8847e0bbcea';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -99;
  $option->label = '2013';
  $option->value = '2013';
  $option->expand = 0;
  $export['d3bb9fee-2265-cf94-9168-c8847e0bbcea'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd4af1a3c-9734-a064-edb5-7873f864b8ad';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -91;
  $option->label = 'Fra 10 år';
  $option->value = 'Fra 10 år';
  $option->expand = 0;
  $export['d4af1a3c-9734-a064-edb5-7873f864b8ad'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd50a0b8f-e3fe-faa4-cd61-2cf6c215aa3d';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -99;
  $option->label = 'dansk';
  $option->value = 'dansk';
  $option->expand = 0;
  $export['d50a0b8f-e3fe-faa4-cd61-2cf6c215aa3d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd5633c84-7725-a294-65e4-f6ef0c2bf2ac';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -94;
  $option->label = 'artikler';
  $option->value = 'avisartikel OR tidsskriftartikel';
  $option->expand = 41;
  $export['d5633c84-7725-a294-65e4-f6ef0c2bf2ac'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd6ee2578-29a3-7004-a588-97df3a82d535';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -77;
  $option->label = 'somali';
  $option->value = 'somali';
  $option->expand = 0;
  $export['d6ee2578-29a3-7004-a588-97df3a82d535'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd85e9a84-391f-b254-11ee-aa57cddcb24c';
  $option->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $option->sort = -99;
  $option->label = 'Country';
  $option->value = '';
  $option->expand = 0;
  $export['d85e9a84-391f-b254-11ee-aa57cddcb24c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd93f8b94-a71e-9c94-7596-8219327064f4';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -47;
  $option->label = '1961';
  $option->value = '1961';
  $option->expand = 0;
  $export['d93f8b94-a71e-9c94-7596-8219327064f4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'd9644afd-2977-83d4-1162-ee49c5381255';
  $option->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $option->sort = 10;
  $option->label = 'År lig med';
  $option->value = 'year_eq';
  $option->expand = 0;
  $export['d9644afd-2977-83d4-1162-ee49c5381255'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'db1c94c4-4fb3-c9f4-b150-acc2278a0d10';
  $option->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $option->sort = -99;
  $option->label = 'trykte bøger';
  $option->value = 'bog';
  $option->expand = 30;
  $export['db1c94c4-4fb3-c9f4-b150-acc2278a0d10'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ddd075df-9227-9f24-492d-675db9e41429';
  $option->v_uuid = 'c19cb357-2094-1a84-0d8b-d96e4ec1b698';
  $option->sort = -99;
  $option->label = 'Børn';
  $option->value = 'børn';
  $option->expand = 0;
  $export['ddd075df-9227-9f24-492d-675db9e41429'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'df0b4766-7649-e294-29dd-51168ecfdb8c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -92;
  $option->label = '2006';
  $option->value = '2006';
  $option->expand = 0;
  $export['df0b4766-7649-e294-29dd-51168ecfdb8c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e00caa62-e13b-bfa4-a1fd-71e3722c9df2';
  $option->v_uuid = 'c7eee360-43fc-0614-3de3-52609300d946';
  $option->sort = 10;
  $option->label = 'Faglitteratur';
  $option->value = 'nonfiktion';
  $option->expand = 0;
  $export['e00caa62-e13b-bfa4-a1fd-71e3722c9df2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e06f5106-595c-e774-7553-9aa89c1ceea5';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -99;
  $option->label = 'arabisk';
  $option->value = 'arabisk';
  $option->expand = 0;
  $export['e06f5106-595c-e774-7553-9aa89c1ceea5'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e10a6280-3e2e-34f4-25e4-fe81cf7afe7a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -69;
  $option->label = '1983';
  $option->value = '1983';
  $option->expand = 0;
  $export['e10a6280-3e2e-34f4-25e4-fe81cf7afe7a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e11a1f66-0a21-cdf4-0927-38d8ab18b8ee';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -49;
  $option->label = '1963';
  $option->value = '1963';
  $option->expand = 0;
  $export['e11a1f66-0a21-cdf4-0927-38d8ab18b8ee'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e198012e-fa7f-21e4-0d22-dbb32ddafb1f';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -95;
  $option->label = 'Fra 18 år';
  $option->value = 'Fra 18 år';
  $option->expand = 0;
  $export['e198012e-fa7f-21e4-0d22-dbb32ddafb1f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e25d8cbd-8ad8-6fb4-3582-0e989212ded8';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -58;
  $option->label = '1972';
  $option->value = '1972';
  $option->expand = 0;
  $export['e25d8cbd-8ad8-6fb4-3582-0e989212ded8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e293ab21-9110-ffd4-ad2b-5a9b7963e8f2';
  $option->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $option->sort = -97;
  $option->label = 'musik på nettet';
  $option->value = 'musik (net)';
  $option->expand = 0;
  $export['e293ab21-9110-ffd4-ad2b-5a9b7963e8f2'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e29e365d-54af-d4c4-fd3a-da18b2ebfba0';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -98;
  $option->label = 'adventurespil';
  $option->value = 'adventurespil';
  $option->expand = 0;
  $export['e29e365d-54af-d4c4-fd3a-da18b2ebfba0'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e2d8456a-a167-07d4-bd75-5b75cb718c40';
  $option->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $option->sort = -100;
  $option->label = 'alle';
  $option->value = '';
  $option->expand = 0;
  $export['e2d8456a-a167-07d4-bd75-5b75cb718c40'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e3f1e8f0-93e2-59c4-95a6-5874831da911';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -86;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['e3f1e8f0-93e2-59c4-95a6-5874831da911'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e478fba3-8ad5-d0d4-d983-1a1335369461';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -81;
  $option->label = 'portugisisk';
  $option->value = 'portugisisk';
  $option->expand = 0;
  $export['e478fba3-8ad5-d0d4-d983-1a1335369461'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e4e53b1d-5c62-0aa4-39f5-f1a96bfe877a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -15;
  $option->label = '1929';
  $option->value = '1929';
  $option->expand = 0;
  $export['e4e53b1d-5c62-0aa4-39f5-f1a96bfe877a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e6a7cc97-e9b0-0c74-c9e0-8c5518bbcede';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -97;
  $option->label = 'aviser og tidsskrifter';
  $option->value = 'avis OR tidsskrift';
  $option->expand = 0;
  $export['e6a7cc97-e9b0-0c74-c9e0-8c5518bbcede'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e6fdeb9d-eb87-78a4-2986-423583f208c3';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -34;
  $option->label = '1948';
  $option->value = '1948';
  $option->expand = 0;
  $export['e6fdeb9d-eb87-78a4-2986-423583f208c3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e7b4c036-ca89-0a34-398e-bce71187e26f';
  $option->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $option->sort = -96;
  $option->label = 'aviser';
  $option->value = 'avis';
  $option->expand = 0;
  $export['e7b4c036-ca89-0a34-398e-bce71187e26f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e7bc27ff-a18a-8994-4d1d-c74e3b781307';
  $option->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $option->sort = -85;
  $option->label = 'Fra 16 år';
  $option->value = 'Fra 16 år';
  $option->expand = 0;
  $export['e7bc27ff-a18a-8994-4d1d-c74e3b781307'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e7dc48ce-6bed-5624-a909-3606945aca4e';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -82;
  $option->label = 'ungarsk';
  $option->value = 'ungarsk';
  $option->expand = 0;
  $export['e7dc48ce-6bed-5624-a909-3606945aca4e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e80b4fc1-0da6-8d54-3d40-2f848b610150';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -94;
  $option->label = 'wii';
  $option->value = 'wii';
  $option->expand = 0;
  $export['e80b4fc1-0da6-8d54-3d40-2f848b610150'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e8224132-9c9b-dd74-0564-69b76307c9d9';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -96;
  $option->label = '2010';
  $option->value = '2010';
  $option->expand = 0;
  $export['e8224132-9c9b-dd74-0564-69b76307c9d9'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e8627ea1-8c56-b974-e595-9adf7a20d4d8';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -95;
  $option->label = 'russisk';
  $option->value = 'russisk';
  $option->expand = 0;
  $export['e8627ea1-8c56-b974-e595-9adf7a20d4d8'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'e9034a0d-61b8-5844-e956-80f4691a85e4';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -36;
  $option->label = '1950';
  $option->value = '1950';
  $option->expand = 0;
  $export['e9034a0d-61b8-5844-e956-80f4691a85e4'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'eb9b8c60-b778-2124-3904-dc03b820416a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -66;
  $option->label = '1980';
  $option->value = '1980';
  $option->expand = 0;
  $export['eb9b8c60-b778-2124-3904-dc03b820416a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ecc906bc-214d-78a4-d940-a6e3204365f3';
  $option->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $option->sort = -99;
  $option->label = 'Fra 3 år';
  $option->value = 'Fra 3 år';
  $option->expand = 0;
  $export['ecc906bc-214d-78a4-d940-a6e3204365f3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ecf1d964-f7c2-4d44-1d86-2e82bdaa8935';
  $option->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $option->sort = -96;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['ecf1d964-f7c2-4d44-1d86-2e82bdaa8935'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ed9e8590-1abc-39a4-51a9-59f367a2ec5a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -16;
  $option->label = '1930';
  $option->value = '1930';
  $option->expand = 0;
  $export['ed9e8590-1abc-39a4-51a9-59f367a2ec5a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ee8004c2-bd7d-c864-7190-c03e1a5f486a';
  $option->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $option->sort = -100;
  $option->label = 'Alle';
  $option->value = '';
  $option->expand = 0;
  $export['ee8004c2-bd7d-c864-7190-c03e1a5f486a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'efad6b2f-58bf-4ee4-c9bd-0534bc83b464';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -76;
  $option->label = '1990';
  $option->value = '1990';
  $option->expand = 0;
  $export['efad6b2f-58bf-4ee4-c9bd-0534bc83b464'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f194eeca-f6c1-3984-a583-22f5eeceea38';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -86;
  $option->label = 'Fra 15 år';
  $option->value = 'Fra 15 år';
  $option->expand = 0;
  $export['f194eeca-f6c1-3984-a583-22f5eeceea38'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f1a840c8-0d41-d984-19fc-8605deda68d3';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -40;
  $option->label = '1954';
  $option->value = '1954';
  $option->expand = 0;
  $export['f1a840c8-0d41-d984-19fc-8605deda68d3'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f3d1fc31-73e2-5844-a9df-f76a9175af07';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -11;
  $option->label = '1925';
  $option->value = '1925';
  $option->expand = 0;
  $export['f3d1fc31-73e2-5844-a9df-f76a9175af07'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f589c94a-1407-2fe4-55ad-6593913eed3d';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -92;
  $option->label = 'xbox 360';
  $option->value = 'xbox 360';
  $option->expand = 0;
  $export['f589c94a-1407-2fe4-55ad-6593913eed3d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f5b2df66-4086-19f4-b540-3d5c8e183607';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -88;
  $option->label = 'hollandsk';
  $option->value = 'hollandsk';
  $option->expand = 0;
  $export['f5b2df66-4086-19f4-b540-3d5c8e183607'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f7cbdb73-eb92-7294-71d0-6c470a6a4b7f';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -7;
  $option->label = '1921';
  $option->value = '1921';
  $option->expand = 0;
  $export['f7cbdb73-eb92-7294-71d0-6c470a6a4b7f'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f82f3690-63a5-1f34-3597-11eabc271b60';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -20;
  $option->label = '1934';
  $option->value = '1934';
  $option->expand = 0;
  $export['f82f3690-63a5-1f34-3597-11eabc271b60'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f8339cf4-9fb2-74a4-5dc2-a92a801da92a';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -62;
  $option->label = '1976';
  $option->value = '1976';
  $option->expand = 0;
  $export['f8339cf4-9fb2-74a4-5dc2-a92a801da92a'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f8bb4e01-6ccb-46e4-a581-d8bae9131711';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -75;
  $option->label = 'svensk';
  $option->value = 'svensk';
  $option->expand = 0;
  $export['f8bb4e01-6ccb-46e4-a581-d8bae9131711'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f96f4d96-0869-17e4-f5a0-c6ef30c69f0d';
  $option->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $option->sort = -71;
  $option->label = 'tysk';
  $option->value = 'tysk';
  $option->expand = 0;
  $export['f96f4d96-0869-17e4-f5a0-c6ef30c69f0d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'f9b8787a-f22f-1074-3df9-3401b73c4b4c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 14;
  $option->label = '1900';
  $option->value = '1900';
  $option->expand = 0;
  $export['f9b8787a-f22f-1074-3df9-3401b73c4b4c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fb1df3a8-cfd8-9994-ed62-2b2593696aaf';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -91;
  $option->label = '2005';
  $option->value = '2005';
  $option->expand = 0;
  $export['fb1df3a8-cfd8-9994-ed62-2b2593696aaf'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fc4006fb-49df-21e4-c501-451509200c74';
  $option->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $option->sort = -90;
  $option->label = 'Fra 11 år';
  $option->value = 'Fra 11 år';
  $option->expand = 0;
  $export['fc4006fb-49df-21e4-c501-451509200c74'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fcb348c2-9ae0-3b64-f913-0d9852108d9e';
  $option->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $option->sort = -97;
  $option->label = 'bånd';
  $option->value = 'lydbog (bånd)';
  $option->expand = 0;
  $export['fcb348c2-9ae0-3b64-f913-0d9852108d9e'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fd2fe5ce-9e5e-2d84-f197-edce5a55f3e7';
  $option->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $option->sort = -95;
  $option->label = 'fransk';
  $option->value = 'fransk';
  $option->expand = 0;
  $export['fd2fe5ce-9e5e-2d84-f197-edce5a55f3e7'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fd4e491b-98e6-4cc4-9107-c49449ffc55c';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = 0;
  $option->label = '1914';
  $option->value = '1914';
  $option->expand = 0;
  $export['fd4e491b-98e6-4cc4-9107-c49449ffc55c'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fd57179a-9a55-58a4-217d-df03a1c57c4d';
  $option->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $option->sort = -86;
  $option->label = 'synge- og dansespil';
  $option->value = '(karaokespil eller dans)';
  $option->expand = 0;
  $export['fd57179a-9a55-58a4-217d-df03a1c57c4d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fdf81eac-f8e2-1b74-89a5-83631e0f59ab';
  $option->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $option->sort = -96;
  $option->label = 'nintendo ds';
  $option->value = 'nintendo ds';
  $option->expand = 0;
  $export['fdf81eac-f8e2-1b74-89a5-83631e0f59ab'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'fe26af95-87da-2c94-3dd3-6d7710279c21';
  $option->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $option->sort = -98;
  $option->label = 'på nettet';
  $option->value = 'lydbog (net)';
  $option->expand = 0;
  $export['fe26af95-87da-2c94-3dd3-6d7710279c21'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ff632c38-f080-6704-f1ea-bda93c6f593d';
  $option->v_uuid = 'c8194635-c911-b994-05e7-b4a3c15edeec';
  $option->sort = -98;
  $option->label = 'avisartikler';
  $option->value = 'avisartikel';
  $option->expand = 0;
  $export['ff632c38-f080-6704-f1ea-bda93c6f593d'] = $option;

  $option = new stdClass();
  $option->disabled = FALSE; /* Edit this to true to make a default option disabled initially */
  $option->api_version = 1;
  $option->o_uuid = 'ff69c72a-b645-e664-89a4-65eaff8be0fb';
  $option->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $option->sort = -61;
  $option->label = '1975';
  $option->value = '1975';
  $option->expand = 0;
  $export['ff69c72a-b645-e664-89a4-65eaff8be0fb'] = $option;

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
  $value->v_uuid = '0161e74a-4d44-b294-6d7d-1d0f98d44b72';
  $value->value_title = 'musik, alle titler';
  $value->sort = -68;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.ti';
  $value->default_value = '';
  $value->expand = 0;
  $export['0161e74a-4d44-b294-6d7d-1d0f98d44b72'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '03e9f728-e8d0-eb44-f9b6-9f465cbb43e6';
  $value->value_title = 'bøger, trykte';
  $value->sort = -91;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['03e9f728-e8d0-eb44-f9b6-9f465cbb43e6'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '0498d8a9-ec7c-b554-6935-35fb39e47e18';
  $value->value_title = 'film, nationalitet';
  $value->sort = -75;
  $value->type = 'Normal';
  $value->search_code = 'term.nationality';
  $value->default_value = '';
  $value->expand = 0;
  $export['0498d8a9-ec7c-b554-6935-35fb39e47e18'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '10b4d35a-a282-ad84-5914-aae55839cc3b';
  $value->value_title = 'musik, alle ophav2';
  $value->sort = -69;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['10b4d35a-a282-ad84-5914-aae55839cc3b'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '15140e7a-49f6-9654-41d5-cfda3561ef4d';
  $value->value_title = 'spil, genre';
  $value->sort = -80;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['15140e7a-49f6-9654-41d5-cfda3561ef4d'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1529e1db-8099-df34-054f-6e110cc63135';
  $value->value_title = 'titel';
  $value->sort = -98;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.ti';
  $value->default_value = '';
  $value->expand = 0;
  $export['1529e1db-8099-df34-054f-6e110cc63135'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '17dac9bb-18b9-1c44-1da7-59d0a2d895d4';
  $value->value_title = 'artikler, tidsskrift eller avis';
  $value->sort = -84;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.vp';
  $value->default_value = '';
  $value->expand = 0;
  $export['17dac9bb-18b9-1c44-1da7-59d0a2d895d4'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '190c6f8a-209b-ad04-110e-40e87002dfc8';
  $value->value_title = 'musik, albumtitel';
  $value->sort = -67;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.ht';
  $value->default_value = '';
  $value->expand = 0;
  $export['190c6f8a-209b-ad04-110e-40e87002dfc8'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1a596610-b816-60c4-596d-968ed8a137f8';
  $value->value_title = 'film, personer';
  $value->sort = -77;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['1a596610-b816-60c4-596d-968ed8a137f8'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1b39ad16-062d-8724-69ae-fd13650b9d30';
  $value->value_title = 'film, tilladt for';
  $value->sort = -72;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['1b39ad16-062d-8724-69ae-fd13650b9d30'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '1f708924-4dc5-38d4-110e-e75fda58ac72';
  $value->value_title = 'emne';
  $value->sort = -97;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.em';
  $value->default_value = '';
  $value->expand = 0;
  $export['1f708924-4dc5-38d4-110e-e75fda58ac72'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '28b2edeb-329f-d124-bdb3-3cca5890d522';
  $value->value_title = 'alle materialer, materialetyper alle';
  $value->sort = -94;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['28b2edeb-329f-d124-bdb3-3cca5890d522'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '36608570-8dc3-9554-d9df-18700fe1a76f';
  $value->value_title = 'spil, platforme';
  $value->sort = -81;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['36608570-8dc3-9554-d9df-18700fe1a76f'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '380470b6-3a54-7d54-b5c2-d90096f17001';
  $value->value_title = 'net, materialetyper';
  $value->sort = -82;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['380470b6-3a54-7d54-b5c2-d90096f17001'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '3971eb08-68c8-d474-7dd8-913df6f4d65b';
  $value->value_title = 'film, materialetype';
  $value->sort = -74;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['3971eb08-68c8-d474-7dd8-913df6f4d65b'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11';
  $value->value_title = 'bøger, sprog';
  $value->sort = -86;
  $value->type = 'Normal';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['3ff2ba5e-aa24-5b64-e1ce-30eabcaffe11'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51';
  $value->value_title = 'artikler og net, sprog';
  $value->sort = -83;
  $value->type = 'Normal';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['46f82c4b-a9e5-0ea4-1df1-6aa1133f8a51'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '48d9765f-1792-0c44-7940-b2ea3b089b52';
  $value->value_title = 'bøger, lydbøger';
  $value->sort = -90;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['48d9765f-1792-0c44-7940-b2ea3b089b52'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '49b025c0-79e3-8494-b90c-9b01a082ee41';
  $value->value_title = 'år, operator';
  $value->sort = -96;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['49b025c0-79e3-8494-b90c-9b01a082ee41'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '517866cf-bbb7-2644-5932-b8afc3c9bbe6';
  $value->value_title = 'bøger, materialetyper';
  $value->sort = -92;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['517866cf-bbb7-2644-5932-b8afc3c9bbe6'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25';
  $value->value_title = 'år, årstal';
  $value->sort = -95;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['634484d4-8c73-f1d4-b5c8-6fe8cdb3ae25'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '6bd01dfd-8e57-a1b4-65e6-7cf6e0815855';
  $value->value_title = 'musik, materialetyper';
  $value->sort = -65;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['6bd01dfd-8e57-a1b4-65e6-7cf6e0815855'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '6c845814-0b74-e184-6501-594909f25552';
  $value->value_title = 'musikophav';
  $value->sort = -71;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.pe';
  $value->default_value = '';
  $value->expand = 0;
  $export['6c845814-0b74-e184-6501-594909f25552'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '792d24cb-dabf-12c4-2d66-16b0d5578e88';
  $value->value_title = 'spil, medierådets aldersanbefaling';
  $value->sort = -78;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['792d24cb-dabf-12c4-2d66-16b0d5578e88'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '7fdbc7be-1d5d-d594-a900-7d3f23cdd18a';
  $value->value_title = 'musikgenrer';
  $value->sort = -66;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['7fdbc7be-1d5d-d594-a900-7d3f23cdd18a'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '86769e13-db25-b274-95c1-7090cf85dcfa';
  $value->value_title = 'film, genre';
  $value->sort = -76;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['86769e13-db25-b274-95c1-7090cf85dcfa'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '964fd0c7-3334-63c4-71be-6735cbdcd5e0';
  $value->value_title = 'musik, alle ophav1';
  $value->sort = -70;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['964fd0c7-3334-63c4-71be-6735cbdcd5e0'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = '965cc0da-adcc-edb4-8533-4f134b1717fe';
  $value->value_title = 'spil, bibliotekets aldersanbefaling';
  $value->sort = -79;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['965cc0da-adcc-edb4-8533-4f134b1717fe'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'ad660d76-c1df-89a4-b5e1-d34330864716';
  $value->value_title = 'alle materialer, sprog';
  $value->sort = -93;
  $value->type = 'Normal';
  $value->search_code = 'term.language';
  $value->default_value = '';
  $value->expand = 0;
  $export['ad660d76-c1df-89a4-b5e1-d34330864716'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'b5941eee-75d5-1d84-b5ac-1c679a3093a0';
  $value->value_title = 'bøger, materialetype skønlitteratur';
  $value->sort = -88;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['b5941eee-75d5-1d84-b5ac-1c679a3093a0'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'b7d961eb-5a00-9654-65b1-bd599f113216';
  $value->value_title = 'ophav';
  $value->sort = -99;
  $value->type = 'Normal';
  $value->search_code = 'dkcclterm.fo';
  $value->default_value = '';
  $value->expand = 0;
  $export['b7d961eb-5a00-9654-65b1-bd599f113216'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'c19cb357-2094-1a84-0d8b-d96e4ec1b698';
  $value->value_title = 'bøger, målgruppe';
  $value->sort = -87;
  $value->type = 'Normal';
  $value->search_code = 'term.category';
  $value->default_value = '';
  $value->expand = 0;
  $export['c19cb357-2094-1a84-0d8b-d96e4ec1b698'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'c2db9b26-09f1-95e4-ad7c-aac26e28a627';
  $value->value_title = 'film, bibliotekets anbefaling';
  $value->sort = -73;
  $value->type = 'Normal';
  $value->search_code = '';
  $value->default_value = '';
  $value->expand = 0;
  $export['c2db9b26-09f1-95e4-ad7c-aac26e28a627'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'c7eee360-43fc-0614-3de3-52609300d946';
  $value->value_title = 'bøger, litterær form';
  $value->sort = -89;
  $value->type = 'Normal';
  $value->search_code = 'term.literaryForm';
  $value->default_value = '';
  $value->expand = 0;
  $export['c7eee360-43fc-0614-3de3-52609300d946'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'c8194635-c911-b994-05e7-b4a3c15edeec';
  $value->value_title = 'artikler, materialetyper';
  $value->sort = -85;
  $value->type = 'Normal';
  $value->search_code = 'term.type';
  $value->default_value = '';
  $value->expand = 0;
  $export['c8194635-c911-b994-05e7-b4a3c15edeec'] = $value;

  $value = new stdClass();
  $value->disabled = FALSE; /* Edit this to true to make a default value disabled initially */
  $value->api_version = 1;
  $value->v_uuid = 'ef9ac7b2-839f-ec54-e900-e232acc28d41';
  $value->value_title = 'fritekst';
  $value->sort = -100;
  $value->type = 'Normal';
  $value->search_code = 'term.default';
  $value->default_value = '';
  $value->expand = 0;
  $export['ef9ac7b2-839f-ec54-e900-e232acc28d41'] = $value;

  return $export;
}
