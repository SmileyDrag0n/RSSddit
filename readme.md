<!-- # RSSddit
 -->
![Title](img/header.jpg)

[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-important)](https://github.com/SmileyDrag0n/RSSddit/blob/master/LICENSE) [![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/SmileyDrag0n/RSSddit?include_prereleases)](https://github.com/SmileyDrag0n/RSSddit/releases) [![GitHub issues by-label](https://img.shields.io/github/issues/SmileyDrag0n/RSSddit/bug)](https://github.com/SmileyDrag0n/RSSddit/issues) [![GitHub commits since latest release (by date including pre-releases)](https://img.shields.io/github/commits-since/SmileyDrag0n/RSSddit/latest?include_prereleases)](https://github.com/SmileyDrag0n/RSSddit/commits)

This is a simple and minimalistic Rainmeter skin with Reddit RSS feed, Karma meter, Twitch live and some add-ons

## Features

- Clean-looking Karma meter
- RSS feed with easy navigation to posts and subs
- Twitch Live panel that shows top 4 active streamers from your follow list
- Dark and light mode support through user actions in Rainmeter
- All settings can be tweaked via one user-friendly settings skin by right-clicking on any skin and choosing **Settings**
- Even more on the way!

## Installation

- Download [latest version](https://github.com/SmileyDrag0n/RSSddit/releases)
- Install the downloaded **.rmskin** file
- By default, setting will open. Change all neccesary parameters to your liking there. More about each setting you can find [here](https://github.com/SmileyDrag0n/RSSddit#settings-and-variables)
- You're all set!

## Authorizing in Twitch Live panel

- If you haven't entered the OAuth token, or it has expired, Live panel will ask you to generate a new one
- In the opened skin, click **Get token** button
- Authorize on the Twitch website
- After authorization, you will be redirected to unresponding localhost. **This is completely normal.** Copy your newly generated token after *&access_token=* from the URL field of your browser, it should look like this:

```url
localost:3000/#access_token=COPYME&scope=user...
```

- Paste the token into corresponding field in the skin and **press enter**
- Click **Log in**
- If you've done everything correctly, Twitch Live panel will now show active streamers

## Settings and variables

All settings can be accessed through each skin's context menu (Right-click on the skin -> Settings), or via new **user-friendly** GUI skin! It is loaded as a default skin when installing the suite.

### Settings file variables

**Username** - change to your Reddit username

**URL** - set this to your custom Reddit feed you wish to pull RSS data from

**OAuth** - set this to your Twitch API token. More on how to generate it [here](https://github.com/SmileyDrag0n/RSSddit#authorizing-in-twitch-live-panel)

**URLSingle** - set this to your custom image-only feed for RSS-Single skin (currently in development)

**Font** - changes feed font

**EntrySpacing** - changes vertical spacing between entries

**LineSpacing** - changes sub name and title spacing from vertical line

## Reddit RSS tips and tricks

Written by [@hiimkir](https://github.com/hiimkir)

- 'www.' in URL is optional
- Add 'old.' to your to RSS URL for your links to lead to classsic reddit (works vice versa too)
- 'https://' is requred for rss to work

### Non-private feeds

- Just add .rss to ***almost*** any reddit page url
- Doesn't matter if it's '.rss' or '/.rss' unless it's reddit.com
- Search results don't work for some reason ([#23](https://github.com/SmileyDrag0n/RSSddit/issues/23))
- Only **posts** will be displayed in widget, so no point in trying to use comment-only feeds (may be fixed)
- **Every** reddit page under this criteria should work, if it doesn't then consider [creating an issue](https://github.com/SmileyDrag0n/RSSddit)
- r/pan, settings and wikis **obviously** don't work

### Private feeds

- Obtainable [here](https://reddit.com/prefs/feeds/)

## Special thanks

**[@hiimkir](https://github.com/hiimkir)** - sigmatester
