Feature: Group dashboard
  As a group member and non-member
  In order to see the group latest activity and information
  I need to be able to see a dashboard with different widgets

  @api
  Scenario: Check dashboard content as group owner
    Given I am logged in as user "mariecurie"
    When  I visit the dashboard of group "Movie Popcorn Corner"
    Then  I should see the group dashboard

  @api
  Scenario: Check dashboard is not accessable for not member of the private group.
    Given I am logged in as user "mariecurie"
    When  I change access of group "Movie Popcorn Corner" to "Private"
    And   I am logged in as user "isaacnewton"
    And   I visit the dashboard of group "Movie Popcorn Corner"
    Then  I should see "Access denied"

  @api
  Scenario: Check dashboard is not accessable for not member of the group with restricted access.
    Given I am logged in as user "mariecurie"
    When  I change access of group "Movie Popcorn Corner" to "Restricted"
    And   I am logged in as user "isaacnewton"
    And   I visit the dashboard of group "Movie Popcorn Corner"
    Then  I should see "Access denied"

  @api
  Scenario: Check dashboard is accessable for not member of the group with restricted access.
    Given I am logged in as user "mariecurie"
    When  I change access of group "Movie Popcorn Corner" to Restricted with "gravity.com" restriction
    And   I am logged in as user "isaacnewton"
    And   I visit the dashboard of group "Movie Popcorn Corner"
    Then  I should see the group dashboard

  @api
  Scenario: Check dashboard is accessable for not member of the public group.
    Given I am logged in as user "mariecurie"
    When  I change access of group "Movie Popcorn Corner" to "Public"
    And   I am logged in as user "isaacnewton"
    And   I visit the dashboard of group "Movie Popcorn Corner"
    Then  I should see the group dashboard
