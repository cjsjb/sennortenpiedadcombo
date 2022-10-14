\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key d \major

		R1  |
		r2 r4 r8 fis  |
		fis 4 fis 8 g fis e 16 d 8. r8  |
		fis 8 fis fis g fis e 16 d 8. e 8  |
%% 5
		d 2 r4 g 8 fis  |
		e 2 ~ e 4 r8 a  |
		a 4 a 8 b a g 16 fis 8. r8  |
		a 8 a a b a g 16 fis 8. g 8  |
		g 2 r4 b 8 b  |
%% 10
		a 2 ~ a 4 fis 8 g  |
		a 8 ( g 16 ) a 8. ~ a 8 ~ a 2  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad.

		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad,

		de no -- so __ tros.
	}
>>
