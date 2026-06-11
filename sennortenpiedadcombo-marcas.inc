\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Sennor, ten piedad de mi...
	\mark \default
	\skip 1*4

	% Sennor, ten piedad de mi...
	\mark \default
	\skip 1*4

	% final
	\mark \default
	%\skip 1*2
}
