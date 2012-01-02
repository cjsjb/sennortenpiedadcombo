\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key d \major

                R1  |
                r2 r4 r8 d'  |
                d' 4 d' 8 e' d' cis' 16 a 8. r8  |
                d' 8 d' d' e' d' cis' 16 a 8. b 8  |
%% 5
                b 2 r4 b 8 d'  |
                cis' 2 _~ cis' 4 r8 d'  |
                d' 4 d' 8 e' d' cis' 16 a 8. r8  |
                d' 8 d' d' e' d' cis' 16 a 8. b 8  |
                b 2 r4 b 8 d'  |
%% 10
                cis' 2 _~ cis' 4 b 8 cis'  |
                d' 8 _( cis' 16 ) d' 8. _~ d' 8 _~ d' 2  |
                R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad.

		Se -- ñor, ten pie -- dad de mí,
		Cris -- to, ten pie -- dad de mí,
		Se -- ñor, ten pie -- dad,

		de no -- so __ tros.
	}
>>
