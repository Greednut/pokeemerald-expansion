	.align 2
voicegroup191::                                                                                            @ Instruments (Eventually we can fill in the rest of these if y'all so desire)
	voice_keysplit_all voicegroup002                                                                     @   0: Drums
	voice_keysplit voicegroup005, KeySplitTable1                                                           @   1: Bright Piano
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @   2: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @   3: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 252, 20, 165         @   4: Electric Piano (Low)
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 188, 103, 165       @   5: Electric Piano (High)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @   6: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @   7: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @   8: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 250, 0, 221                    @   9: Glockenspiel
	voice_directsound 60, 0, DirectSoundWaveData_heart_of_asia_gamelan, 255, 188, 139, 239                 @  10: Gamelan
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  11: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  12: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 246, 0, 204                       @  13: Xylophone
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216                   @  14: Tubular Bells
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  15: -- FREE --
	voice_square_1_alt 60, 0, 0, 2, 0, 6, 0, 1                                                             @  16: Low Health Beep SFX
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 127                          @  17: Percussive Organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 128, 0, 255, 127                          @  18: Rock Organ
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 0, 233, 188               @  19: Church Organ (Low)
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_high, 255, 76, 154, 188             @  20: Church Organ (High)
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 0, 255, 188                       @  21: Accordion
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  22: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  23: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 251, 25, 127               @  24: Acoustic Guitar (Nylon) 1
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 165, 128, 204              @  25: Acoustic Guitar (Nylon) 2
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 249, 25, 0                 @  26: Acoustic Guitar (Nylon) 3
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  27: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  28: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127         @  29: Overdriven Guitar
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127   @  30: Distortion Guitar
	voice_directsound 60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 195               @  31: Guitar Harmonics
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  32: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 20, 149                  @  33: Electric Bass (Fingered)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  34: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 20, 216                  @  35: Fretless Bass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 223, 193, 50                      @  36: Slap Bass
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  37: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 128, 115                    @  38: Synth Bass 1
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 128, 252, 0, 115                      @  39: Synth Bass 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  40: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  41: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  42: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  43: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 236, 0, 38                @  44: Pizzicato Strings 1
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 236, 0, 38                @  45: Pizzicato Strings 2
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_harp, 255, 251, 25, 242                           @  46: Harp
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 250, 0, 242                         @  47: Timpani
	voice_keysplit voicegroup006, KeySplitTable2                                                           @  48: String Ensemble
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  49: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_trinity_big_boned, 255, 0, 255, 127                       @  50: Synth Strings
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  51: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 128              @  52: Choir Aahs
	voice_directsound 60, 0, DirectSoundWaveData_unknown_female_voice, 255, 165, 180, 204                  @  53: Voice Oohs
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  54: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  55: -- FREE --
	voice_keysplit voicegroup007, KeySplitTable3                                                           @  56: Trumpet
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  57: -- FREE --
	voice_keysplit voicegroup008, KeySplitTable4                                                           @  58: Tuba
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  59: -- FREE --
	voice_keysplit voicegroup009, KeySplitTable5                                                           @  60: French Horn
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  61: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127    @  62: Heavy Guitar
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  63: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  64: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  65: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  66: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  67: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 127, 231, 127                   @  68: Oboe
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  69: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  70: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 0, 255, 127                     @  71: Square Wave
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  72: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 255, 127                         @  73: Flute
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 0, 255, 204               @  74: Shakuhachi 1
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  75: -- FREE --
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @  76: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 0, 255, 127               @  77: Shakuhachi 2
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 127, 231, 127                @  78: Whistle
	voice_square_2_alt 60, 0, 3, 0, 1, 7, 0                                                                @  79: ???
	voice_square_1_alt 60, 0, 0, 2, 0, 2, 7, 1                                                             @  80: GB Square
	voice_square_1_alt 60, 0, 0, 1, 0, 2, 7, 1                                                             @  81: GB Sawtooth
	voice_square_1_alt 60, 0, 0, 0, 0, 2, 7, 1                                                             @  82: GB Calliope
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_7, 0, 7, 15, 1                                 @  83: GB Chiff
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_6, 0, 7, 15, 0                                 @  84: GB Charang
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_3, 0, 2, 9, 0                                  @  85: GB Voice
	voice_square_1_alt 60, 0, 0, 2, 0, 0, 15, 0                                                            @  86: GB Fifths
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_3, 0, 7, 15, 1                                 @  87: GB Bass + Lead
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_1, 0, 7, 15, 0                                 @  88: Pad 1
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_15, 0, 7, 15, 0                                @  89: Pad 2
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_7, 0, 7, 15, 1                                 @  90: Pad 3
	voice_square_1_alt 60, 0, 0, 2, 0, 0, 15, 0                                                            @  91: Pad 4
	voice_square_2_alt 60, 0, 2, 0, 2, 6, 1                                                                @  92: Pad 5
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_15, 0, 7, 15, 0                                @  93: Pad 6 (Pad 2 duplicate?)
	voice_square_1_alt 60, 0, 0, 1, 15, 0, 15, 15                                                          @  94: Pad 7
	voice_square_1_alt 60, 0, 0, 0, 15, 0, 15, 15                                                          @  95: Pad 8
	voice_square_2_alt 60, 0, 2, 15, 0, 15, 15                                                             @  96: ???
	voice_square_2_alt 60, 0, 1, 15, 0, 15, 15                                                             @  97: ???
	voice_square_2_alt 60, 0, 0, 15, 0, 15, 15                                                             @  98: ???
	voice_square_2_alt 60, 0, 2, 0, 0, 7, 0                                                                @  99: ???
	voice_square_2_alt 60, 0, 1, 0, 0, 7, 0                                                                @ 100: ???
	voice_square_2_alt 60, 0, 0, 0, 0, 7, 0                                                                @ 101: ???
	voice_square_1_alt 60, 0, 0, 2, 0, 0, 15, 0                                                            @ 102: ???
	voice_square_2_alt 60, 0, 2, 0, 2, 7, 2                                                                @ 103: ???
	voice_square_2_alt 60, 0, 1, 0, 2, 7, 2                                                                @ 104: ???
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                @ 105: -- FREE --
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_high, 255, 0, 206, 242                       @ 106: Shamisen
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 206, 242                        @ 107: Koto
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 206, 242                        @ 108: Koto (Duplicate)
	voice_square_1_alt 60, 0, 0, 2, 0, 3, 0, 2                                                             @ 109: ???
	voice_square_1_alt 60, 0, 0, 1, 0, 3, 0, 2                                                             @ 110: ???
	voice_square_1_alt 60, 0, 0, 0, 0, 3, 0, 2                                                             @ 111: ???
	voice_square_2_alt 60, 0, 2, 0, 3, 0, 2                                                                @ 112: ???
	voice_square_2_alt 60, 0, 1, 0, 3, 0, 2                                                                @ 113: ???
	voice_square_2_alt 60, 0, 0, 0, 3, 0, 2                                                                @ 114: ???
	voice_square_1_alt 60, 0, 0, 2, 0, 1, 4, 6                                                             @ 115: ???
	voice_square_1_alt 60, 0, 0, 1, 0, 1, 4, 6                                                             @ 116: ???
	voice_square_1_alt 60, 0, 0, 0, 0, 1, 4, 6                                                             @ 117: ???
	voice_square_2_alt 60, 0, 2, 0, 1, 4, 6                                                                @ 118: ???
	voice_square_2_alt 60, 0, 1, 0, 1, 4, 6                                                                @ 119: ???
	voice_square_2_alt 60, 0, 0, 0, 1, 4, 6                                                                @ 120: ???
	voice_square_1_alt 60, 0, 0, 2, 0, 0, 7, 0                                                             @ 121: ???
	voice_directsound 60, 0, DirectSoundWaveData_unknown_7, 255, 0, 255, 127                               @ 122: Waves SFX
	voice_square_1_alt 60, 0, 0, 0, 0, 0, 7, 0                                                             @ 123: ???
	voice_noise_alt 60, 0, 0, 0, 4, 0, 3                                                                   @ 124: ???
	voice_noise_alt 60, 0, 0, 0, 4, 0, 1                                                                   @ 125: ???
	voice_noise_alt 60, 0, 0, 0, 2, 6, 1                                                                   @ 126: Applause
	voice_noise_alt 60, 0, 0, 0, 6, 0, 1                                                                   @ 127: Gunshot
