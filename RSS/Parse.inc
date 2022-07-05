[MeasureRSS]
Measure=WebParser
URL=#URL#
RegExp=(?siU)#Item##Item##Item##Item##Item#
UpdateRate=1800

[MeasureUser1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=1
Substitute="":"Empty"

[MeasureSub1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=2
Substitute="":"Empty"

[MeasureURL1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=3

[MeasureTitle1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=4
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=5
Substitute="":"Empty"

[MeasureSub2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=6
Substitute="":"Empty"

[MeasureURL2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=7

[MeasureTitle2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=8
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=9
Substitute="":"Empty"

[MeasureSub3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=10
Substitute="":"Empty"

[MeasureURL3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=11

[MeasureTitle3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=12
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=13
Substitute="":"Empty"

[MeasureSub4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=14
Substitute="":"Empty"

[MeasureURL4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=15

[MeasureTitle4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=16
DecodeCharacterReference=1
Substitute="":"No more items in feed"

[MeasureUser5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=17
Substitute="":"Empty"

[MeasureSub5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=18
Substitute="":"Empty"

[MeasureURL5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=19

[MeasureTitle5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=20
DecodeCharacterReference=1
Substitute="":"No more items in feed"
