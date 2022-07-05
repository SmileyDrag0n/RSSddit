[MeasureRSS]
Measure=WebParser
URL=#URL#
RegExp=(?siU)#Item##Item##Item##Item##Item#
UpdateRate=1800

[MeasureUser1]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<author><name>/(.*)</name>
StringIndex=1
StringIndex2=1
Substitute="":"Empty"

[MeasureSub1]
Measure=WebParser
URL=[MeasureRSS]
RegExp=link href="https://.*reddit.com/r/(.*)/comments.*" />
StringIndex=1
StringIndex2=1
Substitute="":"Empty"

[MeasureURL1]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<link href="(.*)" />
StringIndex=1
StringIndex2=1

[MeasureTitle1]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<title>(.*)</title>
StringIndex=1
StringIndex2=1
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser2]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<author><name>/(.*)</name>
StringIndex=2
StringIndex2=1
Substitute="":"Empty"

[MeasureSub2]
Measure=WebParser
URL=[MeasureRSS]
RegExp=link href="https://.*reddit.com/r/(.*)/comments.*" />
StringIndex=2
StringIndex2=1
Substitute="":"Empty"

[MeasureURL2]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<link href="(.*)" />
StringIndex=2
StringIndex2=1

[MeasureTitle2]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<title>(.*)</title>
StringIndex=2
StringIndex2=1
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser3]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<author><name>/(.*)</name>
StringIndex=3
StringIndex2=1
Substitute="":"Empty"

[MeasureSub3]
Measure=WebParser
URL=[MeasureRSS]
RegExp=link href="https://.*reddit.com/r/(.*)/comments.*" />
StringIndex=3
StringIndex2=1
Substitute="":"Empty"

[MeasureURL3]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<link href="(.*)" />
StringIndex=3
StringIndex2=1

[MeasureTitle3]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<title>(.*)</title>
StringIndex=3
StringIndex2=1
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser4]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<author><name>/(.*)</name>
StringIndex=4
StringIndex2=1
Substitute="":"Empty"

[MeasureSub4]
Measure=WebParser
URL=[MeasureRSS]
RegExp=link href="https://.*reddit.com/r/(.*)/comments.*" />
StringIndex=4
StringIndex2=1
Substitute="":"Empty"

[MeasureURL4]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<link href="(.*)" />
StringIndex=4
StringIndex2=1

[MeasureTitle4]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<title>(.*)</title>
StringIndex=4
StringIndex2=1
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser5]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<author><name>/(.*)</name>
StringIndex=5
StringIndex2=1
Substitute="":"Empty"

[MeasureSub5]
Measure=WebParser
URL=[MeasureRSS]
RegExp=link href="https://.*reddit.com/r/(.*)/comments.*" />
StringIndex=5
StringIndex2=1
Substitute="":"Empty"

[MeasureURL5]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<link href="(.*)" />
StringIndex=5
StringIndex2=1

[MeasureTitle5]
Measure=WebParser
URL=[MeasureRSS]
RegExp=<title>(.*)</title>
StringIndex=5
StringIndex2=1
DecodeCharacterReference=1
Substitute="":"No more items in feed"
