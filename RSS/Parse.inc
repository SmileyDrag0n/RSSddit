[MeasureRSS]
Measure=WebParser
URL=#URL#
RegExp=(?siU)#Item##Item##Item##Item##Item#
UpdateRate=1800

[MeasureUser1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=1

[MeasureSub1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=2

[MeasureURL1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=3

[MeasureTitle1]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=4
DecodeCharacterReference=1

[MeasureUser2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=5

[MeasureSub2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=6

[MeasureURL2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=7

[MeasureTitle2]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=8
DecodeCharacterReference=1

[MeasureUser3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=9

[MeasureSub3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=10

[MeasureURL3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=11

[MeasureTitle3]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=12
DecodeCharacterReference=1

[MeasureUser4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=13

[MeasureSub4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=14

[MeasureURL4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=15

[MeasureTitle4]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=16
DecodeCharacterReference=1

[MeasureUser5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=17

[MeasureSub5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=18

[MeasureURL5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=19

[MeasureTitle5]
Measure=WebParser
URL=[MeasureRSS]
StringIndex=20
DecodeCharacterReference=1
