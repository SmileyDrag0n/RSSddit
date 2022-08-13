[MeasureValidate]
Measure=WebParser
URL=https://id.twitch.tv/oauth2/validate
Header=Authorization: OAuth #OAuth#
RegExp=(?siU).*"user_id":"(.*)",
StringIndex=1
; Debug=2
; Debug2File=Valiadtion.wpdbg
FinishAction=[!EnableMeasure "MeasureStreams"]
OnRegExpErrorAction=[!DeactivateConfig "RSSddit\TwitchLive" "TwitchLive.ini"][!ActivateConfig "RSSddit\TwitchLive" "Authorization.ini"]
; UpdateRate=1800

[MeasureStreams]
Measure=WebParser
URL=https://api.twitch.tv/helix/streams/followed?user_id=[&MeasureValidate]
Header=Authorization: Bearer #OAuth#
Header2=Client-Id: #ClientID#
RegExp=(?siU)(?(?=.*{"id":).*\[{"(.*)})(?(?=.*{"id":).*{"(.*)})(?(?=.*{"id":).*{"(.*)})(?(?=.*{"id":).*{"(.*)})
; //]
; 1-Id; 2-Login; 3-DisplayName; 4-Game
; Debug=2
; Debug2File=StreamsData.wpdbg
Disabled=1
DynamicVariables=1
FinishAction=[!EnableMeasureGroup MeasureUser]
; ! Data sometimes get messed up, maybe use [!UpdateMeasure]
; UpdateRate=1800

[MeasureId1]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=1
StringIndex2=1
Substitute="":"Offline"

[MeasureLogin1]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=1
StringIndex2=2
Substitute="":"Offline"

[MeasureDisplayName1]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=1
StringIndex2=3
Substitute="":"Offline"

[MeasureGame1]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=1
StringIndex2=4
Substitute="":"Offline"
DecodeCodePoints=1

[MeasureId2]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=2
StringIndex2=1
Substitute="":"Offline"

[MeasureLogin2]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=2
StringIndex2=2
Substitute="":"Offline"

[MeasureDisplayName2]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=2
StringIndex2=3
Substitute="":"Offline"

[MeasureGame2]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=2
StringIndex2=4
Substitute="":"Offline"
DecodeCodePoints=1

[MeasureId3]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=3
StringIndex2=1
Substitute="":"Offline"

[MeasureLogin3]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=3
StringIndex2=2
Substitute="":"Offline"

[MeasureDisplayName3]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=3
StringIndex2=3
Substitute="":"Offline"

[MeasureGame3]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=3
StringIndex2=4
Substitute="":"Offline"
DecodeCodePoints=1

[MeasureId4]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=4
StringIndex2=1
Substitute="":"Offline"

[MeasureLogin4]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=4
StringIndex2=2
Substitute="":"Offline"

[MeasureDisplayName4]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=4
StringIndex2=3
Substitute="":"Offline"

[MeasureGame4]
Measure=WebParser
URL=[MeasureStreams]
RegExp=#RegExpId#
StringIndex=4
StringIndex2=4
Substitute="":"Offline"
DecodeCodePoints=1

[MeasureUser1]
Measure=WebParser
Group=MeasureUser
URL=https://api.twitch.tv/helix/users?id=[&MeasureId1]
Header=Authorization: Bearer #OAuth#
Header2=Client-Id: #ClientID#
RegExp=#RegExpUser#
; 1-Profile image; 2-Offline image
; Debug=2
; Debug2File=UserData1.wpdbg
DynamicVariables=1
Disabled=1
FinishAction=[!SetOption MeterPFP1 MeasureName "MeasureProfileImage1"][!SetOption MeterRing1 RingColour "Stroke Color #OnlineRing#"][!ShowMeter MeterDot1][!SetOption MeterPFP1 Greyscale 0][!EnableMouseAction MeterBox1 LeftMouseUpAction]
OnRegExpErrorAction=[!SetOption MeterPFP1 MeasureName ""][!SetOption MeterRing1 RingColour "Stroke Color #OfflineRing#"][!HideMeter MeterDot1][!SetOption MeterPFP1 Greyscale 1][!DisableMouseAction MeterBox1 LeftMouseUpAction]
; UpdateRate=1800

[MeasureProfileImage1]
Measure=WebParser
URL=[MeasureUser1]
StringIndex=1
Download=1

[MeasureUser2]
Measure=WebParser
Group=MeasureUser
URL=https://api.twitch.tv/helix/users?id=[&MeasureId2]
Header=Authorization: Bearer #OAuth#
Header2=Client-Id: #ClientID#
RegExp=#RegExpUser#
; 1-Profile image; 2-Offline image
; Debug=2
; Debug2File=UserData2.wpdbg
DynamicVariables=1
Disabled=1
FinishAction=[!SetOption MeterPFP2 MeasureName "MeasureProfileImage2"][!SetOption MeterRing2 RingColour "Stroke Color #OnlineRing#"][!ShowMeter MeterDot2][!SetOption MeterPFP2 Greyscale 0][!EnableMouseAction MeterBox2 LeftMouseUpAction]
OnRegExpErrorAction=[!SetOption MeterPFP2 MeasureName ""][!SetOption MeterRing2 RingColour "Stroke Color #OfflineRing#"][!HideMeter MeterDot2][!SetOption MeterPFP2 Greyscale 1][!DisableMouseAction MeterBox2 LeftMouseUpAction]
; UpdateRate=1800

[MeasureProfileImage2]
Measure=WebParser
URL=[MeasureUser2]
StringIndex=1
Download=1

[MeasureUser3]
Measure=WebParser
Group=MeasureUser
URL=https://api.twitch.tv/helix/users?id=[&MeasureId3]
Header=Authorization: Bearer #OAuth#
Header2=Client-Id: #ClientID#
RegExp=#RegExpUser#
; 1-Profile image; 2-Offline image
; Debug=2
; Debug2File=UserData3.wpdbg
DynamicVariables=1
Disabled=1
FinishAction=[!SetOption MeterPFP3 MeasureName "MeasureProfileImage3"][!SetOption MeterRing3 RingColour "Stroke Color #OnlineRing#"][!ShowMeter MeterDot3][!SetOption MeterPFP3 Greyscale 0][!EnableMouseAction MeterBox3 LeftMouseUpAction]
OnRegExpErrorAction=[!SetOption MeterPFP3 MeasureName ""][!SetOption MeterRing3 RingColour "Stroke Color #OfflineRing#"][!HideMeter MeterDot3][!SetOption MeterPFP3 Greyscale 1][!DisableMouseAction MeterBox3 LeftMouseUpAction]
; UpdateRate=1800

[MeasureProfileImage3]
Measure=WebParser
URL=[MeasureUser3]
StringIndex=1
Download=1

[MeasureUser4]
Measure=WebParser
Group=MeasureUser
URL=https://api.twitch.tv/helix/users?id=[&MeasureId4]
Header=Authorization: Bearer #OAuth#
Header2=Client-Id: #ClientID#
RegExp=#RegExpUser#
; 1-Profile image; 2-Offline image
; Debug=2
; Debug2File=UserData4.wpdbg
DynamicVariables=1
Disabled=1
FinishAction=[!SetOption MeterPFP4 MeasureName "MeasureProfileImage4"][!SetOption MeterRing4 RingColour "Stroke Color #OnlineRing#"][!ShowMeter MeterDot4][!SetOption MeterPFP4 Greyscale 0][!EnableMouseAction MeterBox4 LeftMouseUpAction]
OnRegExpErrorAction=[!SetOption MeterPFP4 MeasureName ""][!SetOption MeterRing4 RingColour "Stroke Color #OfflineRing#"][!HideMeter MeterDot4][!SetOption MeterPFP4 Greyscale 1][!DisableMouseAction MeterBox4 LeftMouseUpAction]
; UpdateRate=1800

[MeasureProfileImage4]
Measure=WebParser
URL=[MeasureUser4]
StringIndex=1
Download=1
