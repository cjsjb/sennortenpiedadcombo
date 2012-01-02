\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key d \major

                R1  |
                r2 r4 r8 fis'  |
                fis' 4 fis' 8 g' fis' e' 16 d' 8. r8  |
                fis' 8 fis' fis' g' fis' e' 16 d' 8. e' 8  |
%% 5
                d' 2 r4 g' 8 fis'  |
                e' 2 _~ e' 4 r8 fis'  |
                fis' 4 fis' 8 g' fis' e' 16 d' 8. r8  |
                fis' 8 fis' fis' g' fis' e' 16 d' 8. e' 8  |
                d' 2 r4 g' 8 fis'  |
%% 10
                e' 2 _~ e' 4 d' 8 e'  |
                fis' 8 _( e' 16 ) fis' 8. _~ fis' 8 _~ fis' 2  |
                R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad.

		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad,

		de no -- so __ tros.
	}
>>
