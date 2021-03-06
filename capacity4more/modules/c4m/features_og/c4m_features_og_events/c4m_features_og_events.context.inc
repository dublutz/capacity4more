<?php
/**
 * @file
 * c4m_features_og_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function c4m_features_og_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'c4m_overview_og_events_landing';
  $context->description = 'Overview page of all Group Events';
  $context->tag = 'cap4more - Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3e9a9707eba7963ecaa8b99564d20039' => array(
          'module' => 'views',
          'delta' => '3e9a9707eba7963ecaa8b99564d20039',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5218f8132a449400191061a0818719a1' => array(
          'module' => 'views',
          'delta' => '5218f8132a449400191061a0818719a1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-1616c88372ab872314baee532830c643' => array(
          'module' => 'views',
          'delta' => '1616c88372ab872314baee532830c643',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-5cece47fc853c63eb27c1cd4604667de' => array(
          'module' => 'views',
          'delta' => '5cece47fc853c63eb27c1cd4604667de',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-U2RdpobygmZU7ZqgOAKBurq0NTgFuZ10' => array(
          'module' => 'facetapi',
          'delta' => 'U2RdpobygmZU7ZqgOAKBurq0NTgFuZ10',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-ajPbeoCHay77liOuYn2HrFBMw0VZUgCz' => array(
          'module' => 'facetapi',
          'delta' => 'ajPbeoCHay77liOuYn2HrFBMw0VZUgCz',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW' => array(
          'module' => 'facetapi',
          'delta' => 'fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3' => array(
          'module' => 'facetapi',
          'delta' => 'ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-C1uZlhNqghipCSyxxgucWQMdVsq4ppY5' => array(
          'module' => 'facetapi',
          'delta' => 'C1uZlhNqghipCSyxxgucWQMdVsq4ppY5',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-4Erg9yLvJMABad12YSuX81wXLf2eoV17' => array(
          'module' => 'facetapi',
          'delta' => '4Erg9yLvJMABad12YSuX81wXLf2eoV17',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-JQeEQzhfJJBhHcXpX4531H7GTXL1viNU' => array(
          'module' => 'facetapi',
          'delta' => 'JQeEQzhfJJBhHcXpX4531H7GTXL1viNU',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx' => array(
          'module' => 'facetapi',
          'delta' => 'w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Overview page of all Group Events');
  t('cap4more - Events');
  $export['c4m_overview_og_events_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'c4m_overview_og_events_past';
  $context->description = 'Overview page of all past Group Events';
  $context->tag = 'cap4more - Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'c4m_overview_og_events:page_1' => 'c4m_overview_og_events:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6da07ce607871afb2b6c335fc8de3e45' => array(
          'module' => 'views',
          'delta' => '6da07ce607871afb2b6c335fc8de3e45',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'c4m_features_og_events-event_views_links' => array(
          'module' => 'c4m_features_og_events',
          'delta' => 'event_views_links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ajPbeoCHay77liOuYn2HrFBMw0VZUgCz' => array(
          'module' => 'facetapi',
          'delta' => 'ajPbeoCHay77liOuYn2HrFBMw0VZUgCz',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW' => array(
          'module' => 'facetapi',
          'delta' => 'fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3' => array(
          'module' => 'facetapi',
          'delta' => 'ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-C1uZlhNqghipCSyxxgucWQMdVsq4ppY5' => array(
          'module' => 'facetapi',
          'delta' => 'C1uZlhNqghipCSyxxgucWQMdVsq4ppY5',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-4Erg9yLvJMABad12YSuX81wXLf2eoV17' => array(
          'module' => 'facetapi',
          'delta' => '4Erg9yLvJMABad12YSuX81wXLf2eoV17',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-JQeEQzhfJJBhHcXpX4531H7GTXL1viNU' => array(
          'module' => 'facetapi',
          'delta' => 'JQeEQzhfJJBhHcXpX4531H7GTXL1viNU',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx' => array(
          'module' => 'facetapi',
          'delta' => 'w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Overview page of all past Group Events');
  t('cap4more - Events');
  $export['c4m_overview_og_events_past'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'c4m_overview_og_events_upcoming';
  $context->description = 'Overview page of all upcoming Group Events';
  $context->tag = 'cap4more - Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'c4m_overview_og_events:page' => 'c4m_overview_og_events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-1c4f4c3eaf1f8bde7197f2a715ff4ee4' => array(
          'module' => 'views',
          'delta' => '1c4f4c3eaf1f8bde7197f2a715ff4ee4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'c4m_features_og_events-event_views_links' => array(
          'module' => 'c4m_features_og_events',
          'delta' => 'event_views_links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ajPbeoCHay77liOuYn2HrFBMw0VZUgCz' => array(
          'module' => 'facetapi',
          'delta' => 'ajPbeoCHay77liOuYn2HrFBMw0VZUgCz',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW' => array(
          'module' => 'facetapi',
          'delta' => 'fzBPY1BAj0MTas5AQbIbJMNKqcb06xVW',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3' => array(
          'module' => 'facetapi',
          'delta' => 'ZOrDSi3aBn5Scpx14PeuQryeYEcBDDJ3',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-C1uZlhNqghipCSyxxgucWQMdVsq4ppY5' => array(
          'module' => 'facetapi',
          'delta' => 'C1uZlhNqghipCSyxxgucWQMdVsq4ppY5',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-4Erg9yLvJMABad12YSuX81wXLf2eoV17' => array(
          'module' => 'facetapi',
          'delta' => '4Erg9yLvJMABad12YSuX81wXLf2eoV17',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-JQeEQzhfJJBhHcXpX4531H7GTXL1viNU' => array(
          'module' => 'facetapi',
          'delta' => 'JQeEQzhfJJBhHcXpX4531H7GTXL1viNU',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx' => array(
          'module' => 'facetapi',
          'delta' => 'w6asLvBjgGIFWmRHVJbMQJLQjE6uslPx',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Overview page of all upcoming Group Events');
  t('cap4more - Events');
  $export['c4m_overview_og_events_upcoming'] = $context;

  return $export;
}
