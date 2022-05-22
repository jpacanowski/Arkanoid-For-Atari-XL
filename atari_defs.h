//-------------------------------------------------------------------------
// Atari System Equates
// by Freddy Offenga & Christian Groessler
//
// References:
// - Atari 400/800 OS rev.B source code, Atari 1979
// - Atari OS manual - XL addendum
// - Atari XL/XE rev.2 source code, Atari 1984
// - Mapping the Atari - revised edition, Ian Chadwick 1985
//
// ##old##	old OS rev.B label - moved or deleted
// ##1200xl##	new label introduced in 1200XL OS (rev.10/11)
// ##rev2##	new label introduced in XL/XE OS rev.2
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Configuration Equates
//-------------------------------------------------------------------------

#ifndef MAXDEV
#define MAXDEV	 33
#endif
#ifndef IOCBSZ
#define IOCBSZ	 16
#endif

#ifndef SEIOCB
#define SEIOCB	 0*IOCBSZ
#endif
#ifndef MAXIOC
#define MAXIOC	 8*IOCBSZ
#endif

#ifndef DSCTSZ
#define DSCTSZ	 128
#endif

#ifndef LEDGE
#define LEDGE	 2
#endif
#ifndef REDGE
#define REDGE	 39
#endif

#ifndef INIML
#define INIML	 0x0700
#endif

#ifndef ICSORG
#define ICSORG	 0xCC00
#endif
#ifndef DCSORG
#define DCSORG	 0xE000
#endif

// IOCB Command Code Equates

#ifndef OPEN
#define OPEN	 0x03
#endif
#ifndef GETREC
#define GETREC	 0x05
#endif
#ifndef GETCHR
#define GETCHR	 0x07
#endif
#ifndef PUTREC
#define PUTREC	 0x09
#endif
#ifndef PUTCHR
#define PUTCHR	 0x0B
#endif
#ifndef CLOSE
#define CLOSE	 0x0C
#endif
#ifndef STATIS
#define STATIS	 0x0D
#endif
#ifndef SPECIL
#define SPECIL	 0x0E
#endif

// Special Entry Command Equates

// Screen Commands

#ifndef DRAWLN
#define DRAWLN	 0x11
#endif
#ifndef FILLIN
#define FILLIN	 0x12
#endif

// ICAX1 Auxiliary Byte 1 Equates

#ifndef APPEND
#define APPEND	 0x01
#endif
#ifndef DIRECT
#define DIRECT	 0x02
#endif
#ifndef OPNIN
#define OPNIN	 0x04
#endif
#ifndef OPNOT
#define OPNOT	 0x08
#endif
#ifndef MXDMOD
#define MXDMOD	 0x10
#endif
#ifndef INSCLR
#define INSCLR	 0x20
#endif

// Device Code Equates

#ifndef CASSET
#define CASSET	 'C'
#endif
#ifndef DISK
#define DISK	 'D'
#endif
#ifndef SCREDT
#define SCREDT	 'E'
#endif
#ifndef KBD
#define KBD	 'K'
#endif
#ifndef PRINTR
#define PRINTR	 'P'
#endif
#ifndef DISPLY
#define DISPLY	 'S'
#endif

// SIO Command Code Equates

#ifndef SIO_FORMAT
#define SIO_FORMAT    0x21
#endif
#ifndef SIO_FORMATS
#define SIO_FORMATS   0x22
#endif
#ifndef SIO_CONFIG
#define SIO_CONFIG    0x44
#endif
#ifndef SIO_CONFIGSF
#define SIO_CONFIGSF  0x4B
#endif
#ifndef SIO_WRITE
#define SIO_WRITE     0x50
#endif
#ifndef SIO_READ
#define SIO_READ      0x52
#endif
#ifndef SIO_STAT
#define SIO_STAT      0x53
#endif
#ifndef SIO_VERIFY
#define SIO_VERIFY    0x56
#endif
#ifndef SIO_WRITEV
#define SIO_WRITEV    0x57
#endif

// Character and Key Code Equates

#ifndef CLS
#define CLS	 0x7D
#endif
#ifndef EOL
#define EOL	 0x9B
#endif

#ifndef HELP
#define HELP	 0x11
#endif
#ifndef CNTLF1
#define CNTLF1	 0x83
#endif
#ifndef CNTLF2
#define CNTLF2	 0x84
#endif
#ifndef CNTLF3
#define CNTLF3	 0x93
#endif
#ifndef CNTLF4
#define CNTLF4	 0x94
#endif
#ifndef CNTL1
#define CNTL1	 0x9F
#endif

// Status Code Equates

#ifndef SUCCES
#define SUCCES	 1
#endif

#ifndef BRKABT
#define BRKABT	 128
#endif
#ifndef PRVOPN
#define PRVOPN	 129
#endif
#ifndef NONDEV
#define NONDEV	 130
#endif
#ifndef WRONLY
#define WRONLY	 131
#endif
#ifndef NVALID
#define NVALID	 132
#endif
#ifndef NOTOPN
#define NOTOPN	 133
#endif
#ifndef BADIOC
#define BADIOC	 134
#endif
#ifndef RDONLY
#define RDONLY	 135
#endif
#ifndef EOFERR
#define EOFERR	 136
#endif
#ifndef TRNRCD
#define TRNRCD	 137
#endif
#ifndef TIMOUT
#define TIMOUT	 138
#endif
#ifndef DNACK
#define DNACK	 139
#endif
#ifndef FRMERR
#define FRMERR	 140
#endif
#ifndef CRSROR
#define CRSROR	 141
#endif
#ifndef OVRRUN
#define OVRRUN	 142
#endif
#ifndef CHKERR
#define CHKERR	 143
#endif
#ifndef DERROR
#define DERROR	 144
#endif
#ifndef BADMOD
#define BADMOD	 145
#endif
#ifndef FNCNOT
#define FNCNOT	 146
#endif
#ifndef SCRMEM
#define SCRMEM	 147
#endif

#ifndef DSKFMT
#define DSKFMT	 148
#endif
#ifndef INCVER
#define INCVER	 149
#endif
#ifndef DIRNFD
#define DIRNFD	 150
#endif
#ifndef FEXIST
#define FEXIST	 151
#endif
#ifndef NOTBIN
#define NOTBIN	 152
#endif
#ifndef LSYMND
#define LSYMND	 154
#endif
#ifndef BADPRM
#define BADPRM	 156
#endif
#ifndef OUTOFM
#define OUTOFM	 158
#endif
#ifndef INVDEV
#define INVDEV	 160
#endif
#ifndef TMOF
#define TMOF	 161
#endif
#ifndef DSKFLL
#define DSKFLL	 162
#endif
#ifndef FATLIO
#define FATLIO	 163
#endif
#ifndef FNMSMT
#define FNMSMT	 164
#endif
#ifndef INVFNM
#define INVFNM	 165
#endif
#ifndef PDLERR
#define PDLERR	 166
#endif
#ifndef EPERM
#define EPERM	 167
#endif
#ifndef DINVCM
#define DINVCM	 168
#endif
#ifndef DIRFLL
#define DIRFLL	 169
#endif
#ifndef FNTFND
#define FNTFND	 170
#endif
#ifndef PNTINV
#define PNTINV	 171
#endif
#ifndef BADDSK
#define BADDSK	 173
#endif
#ifndef INCFMT
#define INCFMT	 176
#endif

// DCB Device Bus Equates

#ifndef DISKID
#define DISKID	 0x31
#endif
#ifndef PDEVN
#define PDEVN	 0x40
#endif
#ifndef CASET
#define CASET	 0x60
#endif

// Bus Command Equates

#ifndef FOMAT
#define FOMAT	 '!'
#endif
#ifndef PUTSEC
#define PUTSEC	 'P'
#endif
#ifndef READ
#define READ	 'R'
#endif
#ifndef STATC
#define STATC	 'S'
#endif
#ifndef WRITE
#define WRITE	 'W'
#endif

// Command Auxiliary Byte Equates

#ifndef DOUBLE
#define DOUBLE	 'D'
#endif
#ifndef NORMAL
#define NORMAL	 'N'
#endif
#ifndef PLOT
#define PLOT	 'P'
#endif
#ifndef SIDWAY
#define SIDWAY	 'S'
#endif

// Bus Response Equates

#ifndef ACK
#define ACK	 'A'
#endif
#ifndef COMPLT
#define COMPLT	 'C'
#endif
#ifndef ERROR
#define ERROR	 'E'
#endif
#ifndef NACK
#define NACK	 'N'
#endif

// Floating Point Miscellaneous Equates

#ifndef FPREC
#define FPREC	 6
#endif

#ifndef FMPREC
#define FMPREC	 FPREC-1
#endif

// Cassette Record Type Equates

#ifndef HDR
#define HDR	 0xFB
#endif
#ifndef DTA
#define DTA	 0xFC
#endif
#ifndef DT1
#define DT1	 0xFA
#endif
#ifndef EOT
#define EOT	 0xFE
#endif

#ifndef TONE1
#define TONE1	 2
#endif
#ifndef TONE2
#define TONE2	 1
#endif

// Cassette Timing Equates

#ifndef WLEADN
#define WLEADN	 1152
#endif
#ifndef RLEADN
#define RLEADN	 576
#endif
#ifndef WIRGLN
#define WIRGLN	 180
#endif
#ifndef RIRGLN
#define RIRGLN	 120
#endif
#ifndef WSIRGN
#define WSIRGN	 15
#endif
#ifndef RSIRGN
#define RSIRGN	 10
#endif
#ifndef BEEPNN
#define BEEPNN	 30
#endif
#ifndef BEEPFN
#define BEEPFN	 10
#endif

#ifndef WLEADP
#define WLEADP	 960
#endif
#ifndef RLEADP
#define RLEADP	 480
#endif
#ifndef WIRGLP
#define WIRGLP	 150
#endif
#ifndef RIRGLP
#define RIRGLP	 100
#endif
#ifndef WSIRGP
#define WSIRGP	 13
#endif
#ifndef RSIRGP
#define RSIRGP	 8
#endif
#ifndef BEEPNP
#define BEEPNP	 25
#endif
#ifndef BEEPFP
#define BEEPFP	 8
#endif

#ifndef WIRGHI
#define WIRGHI	 0
#endif
#ifndef RIRGHI
#define RIRGHI	 0
#endif

// Power-up Validation Byte Value Equates

#ifndef PUPVL1
#define PUPVL1	 0x5C
#endif
#ifndef PUPVL2
#define PUPVL2	 0x93
#endif
#ifndef PUPVL3
#define PUPVL3	 0x25
#endif

// Relocating Loader Miscellaneous Equates

#ifndef DATAER
#define DATAER	 156
#endif
#ifndef MEMERR
#define MEMERR	 157
#endif

// Miscellaneous Equates

#ifndef IOCFRE
#define IOCFRE	 0xFF
#endif

#ifndef B19200
#define B19200	 0x0028
#endif
#ifndef B00600
#define B00600	 0x05CC
#endif

#ifndef HITONE
#define HITONE	 0x05
#endif
#ifndef LOTONE
#define LOTONE	 0x07
#endif

#ifndef NCOMLO
#define NCOMLO	 0x34
#endif
#ifndef NCOMHI
#define NCOMHI	 0x3C
#endif

#ifndef MOTRGO
#define MOTRGO	 0x34
#endif
#ifndef MOTRST
#define MOTRST	 0x3C
#endif

#ifndef NODAT
#define NODAT	 0x00
#endif
#ifndef GETDAT
#define GETDAT	 0x40
#endif
#ifndef PUTDAT
#define PUTDAT	 0x80
#endif

#ifndef CRETRI
#define CRETRI	 13
#endif
#ifndef DRETRI
#define DRETRI	 1
#endif
#ifndef CTIM
#define CTIM	 2
#endif

#ifndef NBUFSZ
#define NBUFSZ	 40
#endif
#ifndef DBUFSZ
#define DBUFSZ	 20
#endif
#ifndef SBUFSZ
#define SBUFSZ	 29
#endif

//-------------------------------------------------------------------------
// Page Zero Address Equates
//-------------------------------------------------------------------------

#ifndef LINZBS
#define LINZBS	 0x00
#endif
#ifndef LNFLG
#define LNFLG	 0x00
#endif
#ifndef NGFLAG
#define NGFLAG	 0x01
#endif

// Not Cleared

#ifndef CASINI
#define CASINI	 0x02
#endif
#ifndef RAMLO
#define RAMLO	 0x04
#endif
#ifndef TRAMSZ
#define TRAMSZ	 0x06
#endif
//TSTDAT	 0x07
#ifndef CMCMD
#define CMCMD	 0x07
#endif

// Cleared upon Coldstart only

#ifndef WARMST
#define WARMST	 0x08
#endif
#ifndef BOOTQ
#define BOOTQ	 0x09
#endif
#ifndef DOSVEC
#define DOSVEC	 0x0A
#endif
#ifndef DOSINI
#define DOSINI	 0x0C
#endif
#ifndef APPMHI
#define APPMHI	 0x0E
#endif

// Cleared upon Coldstart or Warmstart

#ifndef INTZBS
#define INTZBS	 0x10
#endif

#ifndef POKMSK
#define POKMSK	 0x10
#endif
#ifndef BRKKEY
#define BRKKEY	 0x11
#endif
#ifndef RTCLOK
#define RTCLOK	 0x12
#endif
#ifndef BUFADR
#define BUFADR	 0x15
#endif
#ifndef ICCOMT
#define ICCOMT	 0x17
#endif
#ifndef DSKFMS
#define DSKFMS	 0x18
#endif
#ifndef DSKUTL
#define DSKUTL	 0x1A
#endif
#ifndef ABUFPT
#define ABUFPT	 0x1C
#endif

//PTIMOT	 0x1C
//PBPNT	 0x1D
//PBUFSZ	 0x1E
//PTEMP	 0x1F

#ifndef ZIOCB
#define ZIOCB	 0x20
#endif
#ifndef IOCBAS
#define IOCBAS	 0x20
#endif
#ifndef ICHIDZ
#define ICHIDZ	 0x20
#endif
#ifndef ICDNOZ
#define ICDNOZ	 0x21
#endif
#ifndef ICCOMZ
#define ICCOMZ	 0x22
#endif
#ifndef ICSTAZ
#define ICSTAZ	 0x23
#endif
#ifndef ICBALZ
#define ICBALZ	 0x24
#endif
#ifndef ICBAHZ
#define ICBAHZ	 0x25
#endif
#ifndef ICPTLZ
#define ICPTLZ	 0x26
#endif
#ifndef ICPTHZ
#define ICPTHZ	 0x27
#endif
#ifndef ICBLLZ
#define ICBLLZ	 0x28
#endif
#ifndef ICBLHZ
#define ICBLHZ	 0x29
#endif
#ifndef ICAX1Z
#define ICAX1Z	 0x2A
#endif
#ifndef ICAX2Z
#define ICAX2Z	 0x2B
#endif
#ifndef ICSPRZ
#define ICSPRZ	 0x2C
#endif

#ifndef ENTVEC
#define ENTVEC	 0x2C
#endif
#ifndef ICIDNO
#define ICIDNO	 0x2E
#endif
#ifndef CIOCHR
#define CIOCHR	 0x2F
#endif

#ifndef STATUS
#define STATUS	 0x30
#endif
#ifndef CHKSUM
#define CHKSUM	 0x31
#endif
#ifndef BUFRLO
#define BUFRLO	 0x32
#endif
#ifndef BUFRHI
#define BUFRHI	 0x33
#endif
#ifndef BFENLO
#define BFENLO	 0x34
#endif
#ifndef BFENHI
#define BFENHI	 0x35
#endif
//CRETRY	 0x36
//DRETRY	 0x37
#ifndef LTEMP
#define LTEMP	 0x36
#endif
#ifndef BUFRFL
#define BUFRFL	 0x38
#endif
#ifndef RECVDN
#define RECVDN	 0x39
#endif
#ifndef XMTDON
#define XMTDON	 0x3A
#endif
#ifndef CHKSNT
#define CHKSNT	 0x3B
#endif
#ifndef NOCKSM
#define NOCKSM	 0x3C
#endif
#ifndef BPTR
#define BPTR	 0x3D
#endif
#ifndef FTYPE
#define FTYPE	 0x3E
#endif
#ifndef FEOF
#define FEOF	 0x3F
#endif
#ifndef FREQ
#define FREQ	 0x40
#endif
#ifndef SOUNDR
#define SOUNDR	 0x41
#endif

#ifndef CRITIC
#define CRITIC	 0x42
#endif

#ifndef FMSZPG
#define FMSZPG	 0x43
#endif

//CKEY	 0x4A
#ifndef ZCHAIN
#define ZCHAIN	 0x4A
#endif
//CASSBT	 0x4B
#ifndef DSTAT
#define DSTAT	 0x4C
#endif
#ifndef ATRACT
#define ATRACT	 0x4D
#endif
#ifndef DRKMSK
#define DRKMSK	 0x4E
#endif
#ifndef COLRSH
#define COLRSH	 0x4F
#endif


#ifndef TMPCHR
#define TMPCHR	 0x50
#endif
#ifndef HOLD1
#define HOLD1	 0x51
#endif
#ifndef LMARGN
#define LMARGN	 0x52
#endif
#ifndef RMARGN
#define RMARGN	 0x53
#endif
#ifndef ROWCRS
#define ROWCRS	 0x54
#endif
#ifndef COLCRS
#define COLCRS	 0x55
#endif
#ifndef DINDEX
#define DINDEX	 0x57
#endif
#ifndef SAVMSC
#define SAVMSC	 0x58
#endif
#ifndef OLDROW
#define OLDROW	 0x5A
#endif
#ifndef OLDCOL
#define OLDCOL	 0x5B
#endif
#ifndef OLDCHR
#define OLDCHR	 0x5D
#endif
#ifndef OLDADR
#define OLDADR	 0x5E
#endif
#ifndef FKDEF
#define FKDEF	 0x60
#endif
//NEWROW	 0x60
//NEWCOL	 0x61
#ifndef PALNTS
#define PALNTS	 0x62
#endif
#ifndef LOGCOL
#define LOGCOL	 0x63
#endif
#ifndef ADRESS
#define ADRESS	 0x64
#endif

#ifndef MLTTMP
#define MLTTMP	 0x66
#endif
#ifndef OPNTMP
#define OPNTMP	 0x66
#endif
#ifndef TOADR
#define TOADR	 0x66
#endif

#ifndef SAVADR
#define SAVADR	 0x68
#endif
#ifndef FRMADR
#define FRMADR	 0x68
#endif

#ifndef RAMTOP
#define RAMTOP	 0x6A
#endif
#ifndef BUFCNT
#define BUFCNT	 0x6B
#endif
#ifndef BUFSTR
#define BUFSTR	 0x6C
#endif
#ifndef BITMSK
#define BITMSK	 0x6E
#endif
#ifndef SHFAMT
#define SHFAMT	 0x6F
#endif
#ifndef ROWAC
#define ROWAC	 0x70
#endif
#ifndef COLAC
#define COLAC	 0x72
#endif
#ifndef ENDPT
#define ENDPT	 0x74
#endif
#ifndef DELTAR
#define DELTAR	 0x76
#endif
#ifndef DELTAC
#define DELTAC	 0x77
#endif
#ifndef KEYDEF
#define KEYDEF	 0x79
#endif
//ROWINC	 0x79
//COLINC	 0x7A
#ifndef SWPFLG
#define SWPFLG	 0x7B
#endif
#ifndef HOLDCH
#define HOLDCH	 0x7C
#endif
#ifndef INSDAT
#define INSDAT	 0x7D
#endif
#ifndef COUNTR
#define COUNTR	 0x7E
#endif

// Floating Point Package Page Zero Address Equates

#ifndef FR0
#define FR0	 0xD4
#endif
#ifndef FR0M
#define FR0M	 0xD5
#endif
#ifndef QTEMP
#define QTEMP	 0xD9
#endif

#ifndef FRE
#define FRE	 0xDA
#endif

#ifndef FR1
#define FR1	 0xE0
#endif
#ifndef FR1M
#define FR1M	 0xE1
#endif

#ifndef FR2
#define FR2	 0xE6
#endif

#ifndef FRX
#define FRX	 0xEC
#endif

#ifndef EEXP
#define EEXP	 0xED
#endif

#ifndef FRSIGN
#define FRSIGN	 0xEE
#endif
#ifndef NSIGN
#define NSIGN	 0xEE
#endif

#ifndef PLYCNT
#define PLYCNT	 0xEF
#endif
#ifndef ESIGN
#define ESIGN	 0xEF
#endif

#ifndef SGNFLG
#define SGNFLG	 0xF0
#endif
#ifndef FCHRFLG
#define FCHRFLG	 0xF0
#endif

#ifndef XFMFLG
#define XFMFLG	 0xF1
#endif
#ifndef DIGRT
#define DIGRT	 0xF1
#endif

#ifndef CIX
#define CIX	 0xF2
#endif
#ifndef INBUFF
#define INBUFF	 0xF3
#endif

#ifndef ZTEMP1
#define ZTEMP1	 0xF5
#endif
#ifndef ZTEMP4
#define ZTEMP4	 0xF7
#endif
#ifndef ZTEMP3
#define ZTEMP3	 0xF9
#endif

//DEGFLG	 0xFB
//RADFLG	 0xFB

#ifndef FLPTR
#define FLPTR	 0xFC
#endif
#ifndef FPTR2
#define FPTR2	 0xFE
#endif

//-------------------------------------------------------------------------
// Page Two Address Equates
//-------------------------------------------------------------------------

#ifndef INTABS
#define INTABS	 0x0200
#endif

#ifndef VDSLST
#define VDSLST	 0x0200
#endif
#ifndef VPRCED
#define VPRCED	 0x0202
#endif
#ifndef VINTER
#define VINTER	 0x0204
#endif
#ifndef VBREAK
#define VBREAK	 0x0206
#endif
#ifndef VKEYBD
#define VKEYBD	 0x0208
#endif
#ifndef VSERIN
#define VSERIN	 0x020A
#endif
#ifndef VSEROR
#define VSEROR	 0x020C
#endif
#ifndef VSEROC
#define VSEROC	 0x020E
#endif
#ifndef VTIMR1
#define VTIMR1	 0x0210
#endif
#ifndef VTIMR2
#define VTIMR2	 0x0212
#endif
#ifndef VTIMR4
#define VTIMR4	 0x0214
#endif
#ifndef VIMIRQ
#define VIMIRQ	 0x0216
#endif
#ifndef CDTMV1
#define CDTMV1	 0x0218
#endif
#ifndef CDTMV2
#define CDTMV2	 0x021A
#endif
#ifndef CDTMV3
#define CDTMV3	 0x021C
#endif
#ifndef CDTMV4
#define CDTMV4	 0x021E
#endif
#ifndef CDTMV5
#define CDTMV5	 0x0220
#endif
#ifndef VVBLKI
#define VVBLKI	 0x0222
#endif
#ifndef VVBLKD
#define VVBLKD	 0x0224
#endif
#ifndef CDTMA1
#define CDTMA1	 0x0226
#endif
#ifndef CDTMA2
#define CDTMA2	 0x0228
#endif
#ifndef CDTMF3
#define CDTMF3	 0x022A
#endif
#ifndef SRTIMR
#define SRTIMR	 0x022B
#endif
#ifndef CDTMF4
#define CDTMF4	 0x022C
#endif
#ifndef INTEMP
#define INTEMP	 0x022D
#endif
#ifndef CDTMF5
#define CDTMF5	 0x022E
#endif
#ifndef SDMCTL
#define SDMCTL	 0x022F
#endif
#ifndef SDLSTL
#define SDLSTL	 0x0230
#endif
#ifndef SDLSTH
#define SDLSTH	 0x0231
#endif
#ifndef SSKCTL
#define SSKCTL	 0x0232
#endif
#ifndef LCOUNT
#define LCOUNT	 0x0233
#endif
#ifndef LPENH
#define LPENH	 0x0234
#endif
#ifndef LPENV
#define LPENV	 0x0235
#endif
#ifndef BRKKY
#define BRKKY	 0x0236
#endif
//RELADR	 0x0238
#ifndef VPIRQ
#define VPIRQ	 0x0238
#endif
#ifndef CDEVIC
#define CDEVIC	 0x023A
#endif
#ifndef CCOMND
#define CCOMND	 0x023B
#endif
#ifndef CAUX1
#define CAUX1	 0x023C
#endif
#ifndef CAUX2
#define CAUX2	 0x023D
#endif

#ifndef TEMP
#define TEMP	 0x023E
#endif

#ifndef ERRFLG
#define ERRFLG	 0x023F
#endif

#ifndef DFLAGS
#define DFLAGS	 0x0240
#endif
#ifndef DBSECT
#define DBSECT	 0x0241
#endif
#ifndef BOOTAD
#define BOOTAD	 0x0242
#endif
#ifndef COLDST
#define COLDST	 0x0244
#endif
#ifndef RECLEN
#define RECLEN	 0x0245
#endif
#ifndef DSKTIM
#define DSKTIM	 0x0246
#endif
//LINBUF	 0x0247
#ifndef PDVMSK
#define PDVMSK	 0x0247
#endif
#ifndef SHPDVS
#define SHPDVS	 0x0248
#endif
#ifndef PDIMSK
#define PDIMSK	 0x0249
#endif
#ifndef RELADR
#define RELADR	 0x024A
#endif
#ifndef PPTMPA
#define PPTMPA	 0x024C
#endif
#ifndef PPTMPX
#define PPTMPX	 0x024D
#endif

#ifndef CHSALT
#define CHSALT	 0x026B
#endif
#ifndef VSFLAG
#define VSFLAG	 0x026C
#endif
#ifndef KEYDIS
#define KEYDIS	 0x026D
#endif
#ifndef FINE
#define FINE	 0x026E
#endif
#ifndef GPRIOR
#define GPRIOR	 0x026F
#endif

#ifndef PADDL0
#define PADDL0	 0x0270
#endif
#ifndef PADDL1
#define PADDL1	 0x0271
#endif
#ifndef PADDL2
#define PADDL2	 0x0272
#endif
#ifndef PADDL3
#define PADDL3	 0x0273
#endif
#ifndef PADDL4
#define PADDL4	 0x0274
#endif
#ifndef PADDL5
#define PADDL5	 0x0275
#endif
#ifndef PADDL6
#define PADDL6	 0x0276
#endif
#ifndef PADDL7
#define PADDL7	 0x0277
#endif

#ifndef STICK0
#define STICK0	 0x0278
#endif
#ifndef STICK1
#define STICK1	 0x0279
#endif
#ifndef STICK2
#define STICK2	 0x027A
#endif
#ifndef STICK3
#define STICK3	 0x027B
#endif

#ifndef PTRIG0
#define PTRIG0	 0x027C
#endif
#ifndef PTRIG1
#define PTRIG1	 0x027D
#endif
#ifndef PTRIG2
#define PTRIG2	 0x027E
#endif
#ifndef PTRIG3
#define PTRIG3	 0x027F
#endif
#ifndef PTRIG4
#define PTRIG4	 0x0280
#endif
#ifndef PTRIG5
#define PTRIG5	 0x0281
#endif
#ifndef PTRIG6
#define PTRIG6	 0x0281
#endif
#ifndef PTRIG7
#define PTRIG7	 0x0283
#endif

#ifndef STRIG0
#define STRIG0	 0x0284
#endif
#ifndef STRIG1
#define STRIG1	 0x0285
#endif
#ifndef STRIG2
#define STRIG2	 0x0286
#endif
#ifndef STRIG3
#define STRIG3	 0x0287
#endif

//CSTAT	 0x0288
#ifndef HIBYTE
#define HIBYTE	 0x0288
#endif
#ifndef WMODE
#define WMODE	 0x0289
#endif
#ifndef BLIM
#define BLIM	 0x028A
#endif
#ifndef IMASK
#define IMASK	 0x028B
#endif
#ifndef JVECK
#define JVECK	 0x028C
#endif
#ifndef NEWADR
#define NEWADR	 0x028E
#endif
#ifndef TXTROW
#define TXTROW	 0x0290
#endif
#ifndef TXTCOL
#define TXTCOL	 0x0291
#endif
#ifndef TINDEX
#define TINDEX	 0x0293
#endif
#ifndef TXTMSC
#define TXTMSC	 0x0294
#endif
#ifndef TXTOLD
#define TXTOLD	 0x0296
#endif
//TMPX1	 0x029C
#ifndef CRETRY
#define CRETRY	 0x029C
#endif
#ifndef HOLD3
#define HOLD3	 0x029D
#endif
#ifndef SUBTMP
#define SUBTMP	 0x029E
#endif
#ifndef HOLD2
#define HOLD2	 0x029F
#endif
#ifndef DMASK
#define DMASK	 0x02A0
#endif
#ifndef TMPLBT
#define TMPLBT	 0x02A1
#endif
#ifndef ESCFLG
#define ESCFLG	 0x02A2
#endif
#ifndef TABMAP
#define TABMAP	 0x02A3
#endif
#ifndef LOGMAP
#define LOGMAP	 0x02B2
#endif
#ifndef INVFLG
#define INVFLG	 0x02B6
#endif
#ifndef FILFLG
#define FILFLG	 0x02B7
#endif
#ifndef TMPROW
#define TMPROW	 0x02B8
#endif
#ifndef TMPCOL
#define TMPCOL	 0x02B9
#endif
#ifndef SCRFLG
#define SCRFLG	 0x02BB
#endif
#ifndef HOLD4
#define HOLD4	 0x02BC
#endif
//HOLD5	 0x02BD
#ifndef DRETRY
#define DRETRY	 0x02BD
#endif
#ifndef SHFLOK
#define SHFLOK	 0x02BE
#endif
#ifndef BOTSCR
#define BOTSCR	 0x02BF
#endif

#ifndef PCOLR0
#define PCOLR0	 0x02C0
#endif
#ifndef PCOLR1
#define PCOLR1	 0x02C1
#endif
#ifndef PCOLR2
#define PCOLR2	 0x02C2
#endif
#ifndef PCOLR3
#define PCOLR3	 0x02C3
#endif

#ifndef COLOR0
#define COLOR0	 0x02C4
#endif
#ifndef COLOR1
#define COLOR1	 0x02C5
#endif
#ifndef COLOR2
#define COLOR2	 0x02C6
#endif
#ifndef COLOR3
#define COLOR3	 0x02C7
#endif

#ifndef COLOR4
#define COLOR4	 0x02C8
#endif

#ifndef PARMBL
#define PARMBL	 0x02C9
#endif
#ifndef RUNADR
#define RUNADR	 0x02C9
#endif
#ifndef HIUSED
#define HIUSED	 0x02CB
#endif
#ifndef ZHIUSE
#define ZHIUSE	 0x02CD
#endif

#ifndef OLDPAR
#define OLDPAR	 0x02CF
#endif
#ifndef GBYTEA
#define GBYTEA	 0x02CF
#endif
#ifndef LOADAD
#define LOADAD	 0x02D1
#endif
#ifndef ZLOADA
#define ZLOADA	 0x02D3
#endif

#ifndef DSCTLN
#define DSCTLN	 0x02D5
#endif
#ifndef ACMISR
#define ACMISR	 0x02D7
#endif
#ifndef KRPDEL
#define KRPDEL	 0x02D9
#endif
#ifndef KEYREP
#define KEYREP	 0x02DA
#endif
#ifndef NOCLIK
#define NOCLIK	 0x02DB
#endif
#ifndef HELPFG
#define HELPFG	 0x02DC
#endif
#ifndef DMASAV
#define DMASAV	 0x02DD
#endif
#ifndef PBPNT
#define PBPNT	 0x02DE
#endif
#ifndef PBUFSZ
#define PBUFSZ	 0x02DF
#endif

#ifndef GLBABS
#define GLBABS	 0x02E0
#endif
#ifndef RUNAD
#define RUNAD	 0x02E0
#endif
#ifndef INITAD
#define INITAD	 0x02E2
#endif

#ifndef RAMSIZ
#define RAMSIZ	 0x02E4
#endif
#ifndef MEMTOP
#define MEMTOP	 0x02E5
#endif
#ifndef MEMLO
#define MEMLO	 0x02E7
#endif
#ifndef HNDLOD
#define HNDLOD	 0x02E9
#endif
#ifndef DVSTAT
#define DVSTAT	 0x02EA
#endif
#ifndef CBAUDL
#define CBAUDL	 0x02EE
#endif
#ifndef CBAUDH
#define CBAUDH	 0x02EF
#endif
#ifndef CRSINH
#define CRSINH	 0x02F0
#endif
#ifndef KEYDEL
#define KEYDEL	 0x02F1
#endif
#ifndef CH1
#define CH1	 0x02F2
#endif
#ifndef CHACT
#define CHACT	 0x02F3
#endif
#ifndef CHBAS
#define CHBAS	 0x02F4
#endif

#ifndef NEWROW
#define NEWROW	 0x02F5
#endif
#ifndef NEWCOL
#define NEWCOL	 0x02F6
#endif
#ifndef ROWINC
#define ROWINC	 0x02F8
#endif
#ifndef COLINC
#define COLINC	 0x02F9
#endif

#ifndef CHAR
#define CHAR	 0x02FA
#endif
#ifndef ATACHR
#define ATACHR	 0x02FB
#endif
#ifndef CH
#define CH	 0x02FC
#endif
#ifndef FILDAT
#define FILDAT	 0x02FD
#endif
#ifndef DSPFLG
#define DSPFLG	 0x02FE
#endif
#ifndef SSFLAG
#define SSFLAG	 0x02FF
#endif

//-------------------------------------------------------------------------
// Page Three Address Equates
//-------------------------------------------------------------------------

#ifndef DCB
#define DCB	 0x0300
#endif
#ifndef DDEVIC
#define DDEVIC	 0x0300
#endif
#ifndef DUNIT
#define DUNIT	 0x0301
#endif
#ifndef DCOMND
#define DCOMND	 0x0302
#endif
#ifndef DSTATS
#define DSTATS	 0x0303
#endif
#ifndef DBUFLO
#define DBUFLO	 0x0304
#endif
#ifndef DBUFHI
#define DBUFHI	 0x0305
#endif
#ifndef DTIMLO
#define DTIMLO	 0x0306
#endif
#ifndef DUNUSE
#define DUNUSE	 0x0307
#endif
#ifndef DBYTLO
#define DBYTLO	 0x0308
#endif
#ifndef DBYTHI
#define DBYTHI	 0x0309
#endif
#ifndef DAUX1
#define DAUX1	 0x030A
#endif
#ifndef DAUX2
#define DAUX2	 0x030B
#endif

#ifndef TIMER1
#define TIMER1	 0x030C
#endif
//ADDCOR	 0x030E
#ifndef JMPERS
#define JMPERS	 0x030E
#endif
#ifndef CASFLG
#define CASFLG	 0x030F
#endif
#ifndef TIMER2
#define TIMER2	 0x0310
#endif
#ifndef TEMP1
#define TEMP1	 0x0312
#endif
//TEMP2	 0x0314
#ifndef TEMP2
#define TEMP2	 0x0313
#endif
#ifndef PTIMOT
#define PTIMOT	 0x0314
#endif
#ifndef TEMP3
#define TEMP3	 0x0315
#endif
#ifndef SAVIO
#define SAVIO	 0x0316
#endif
#ifndef TIMFLG
#define TIMFLG	 0x0317
#endif
#ifndef STACKP
#define STACKP	 0x0318
#endif
#ifndef TSTAT
#define TSTAT	 0x0319
#endif

#ifndef HATABS
#define HATABS	 0x031A
#endif
#ifndef PUPBT1
#define PUPBT1	 0x033D
#endif
#ifndef PUPBT2
#define PUPBT2	 0x033E
#endif
#ifndef PUPBT3
#define PUPBT3	 0x033F
#endif

#ifndef IOCB
#define IOCB	 0x0340
#endif
#ifndef ICHID
#define ICHID	 0x0340
#endif
#ifndef ICDNO
#define ICDNO	 0x0341
#endif
#ifndef ICCOM
#define ICCOM	 0x0342
#endif
#ifndef ICSTA
#define ICSTA	 0x0343
#endif
#ifndef ICBAL
#define ICBAL	 0x0344
#endif
#ifndef ICBAH
#define ICBAH	 0x0345
#endif
#ifndef ICPTL
#define ICPTL	 0x0346
#endif
#ifndef ICPTH
#define ICPTH	 0x0347
#endif
#ifndef ICBLL
#define ICBLL	 0x0348
#endif
#ifndef ICBLH
#define ICBLH	 0x0349
#endif
#ifndef ICAX1
#define ICAX1	 0x034A
#endif
#ifndef ICAX2
#define ICAX2	 0x034B
#endif
#ifndef ICAX3
#define ICAX3	 0x034C
#endif
#ifndef ICAX4
#define ICAX4	 0x034D
#endif
#ifndef ICAX5
#define ICAX5	 0x034E
#endif
#ifndef ICSPR
#define ICSPR	 0x034F
#endif

#ifndef PRNBUF
#define PRNBUF	 0x03C0
#endif
#ifndef SUPERF
#define SUPERF	 0x03E8
#endif
#ifndef CKEY
#define CKEY	 0x03E9
#endif
#ifndef CASSBT
#define CASSBT	 0x03EA
#endif
#ifndef CARTCK
#define CARTCK	 0x03EB
#endif
#ifndef DERRF
#define DERRF	 0x03EC
#endif

// Remainder of Page Three Not Cleared upon Reset

#ifndef ACMVAR
#define ACMVAR	 0x03ED
#endif
#ifndef BASICF
#define BASICF	 0x03F8
#endif
#ifndef MINTLK
#define MINTLK	 0x03F9
#endif
#ifndef GINTLK
#define GINTLK	 0x03FA
#endif
#ifndef CHLINK
#define CHLINK	 0x03FB
#endif
#ifndef CASBUF
#define CASBUF	 0x03FD
#endif

//-------------------------------------------------------------------------
// Page Four/Five Address Equates
//-------------------------------------------------------------------------

// USER AREA STARTS HERE AND GOES TO END OF PAGE FIVE
#ifndef USAREA
#define USAREA	 0x0480
#endif

#ifndef LBPR1
#define LBPR1	 0x057E
#endif
#ifndef LBPR2
#define LBPR2	 0x057F
#endif
#ifndef LBUFF
#define LBUFF	 0x0580
#endif

#ifndef PLYARG
#define PLYARG	 0x05E0
#endif
#ifndef FPSCR
#define FPSCR	 0x05E6
#endif
#ifndef FPSCR1
#define FPSCR1	 0x05EC
#endif

//LBFEND	 0x05FF

//-------------------------------------------------------------------------
// Cartridge Address Equates
//-------------------------------------------------------------------------

#ifndef CARTCS
#define CARTCS	 0xBFFA
#endif
#ifndef CART
#define CART	 0xBFFC
#endif
#ifndef CARTFG
#define CARTFG	 0xBFFD
#endif
#ifndef CARTAD
#define CARTAD	 0xBFFE
#endif

//-------------------------------------------------------------------------
// CTIA/GTIA Address Equates
//-------------------------------------------------------------------------

#ifndef GTIA
#define GTIA	 0xD000
#endif

// Read/Write Addresses

#ifndef CONSOL
#define CONSOL	 0xD01F
#endif

// Read Addresses

#ifndef M0PF
#define M0PF	 0xD000
#endif
#ifndef M1PF
#define M1PF	 0xD001
#endif
#ifndef M2PF
#define M2PF	 0xD002
#endif
#ifndef M3PF
#define M3PF	 0xD003
#endif

#ifndef P0PF
#define P0PF	 0xD004
#endif
#ifndef P1PF
#define P1PF	 0xD005
#endif
#ifndef P2PF
#define P2PF	 0xD006
#endif
#ifndef P3PF
#define P3PF	 0xD007
#endif

#ifndef M0PL
#define M0PL	 0xD008
#endif
#ifndef M1PL
#define M1PL	 0xD009
#endif
#ifndef M2PL
#define M2PL	 0xD00A
#endif
#ifndef M3PL
#define M3PL	 0xD00B
#endif

#ifndef P0PL
#define P0PL	 0xD00C
#endif
#ifndef P1PL
#define P1PL	 0xD00D
#endif
#ifndef P2PL
#define P2PL	 0xD00E
#endif
#ifndef P3PL
#define P3PL	 0xD00F
#endif

#ifndef TRIG0
#define TRIG0	 0xD010
#endif
#ifndef TRIG1
#define TRIG1	 0xD011
#endif

#ifndef TRIG2
#define TRIG2	 0xD012
#endif
#ifndef TRIG3
#define TRIG3	 0xD013
#endif

#ifndef PAL
#define PAL	 0xD014
#endif

// Write Addresses

#ifndef HPOSP0
#define HPOSP0	 0xD000
#endif
#ifndef HPOSP1
#define HPOSP1	 0xD001
#endif
#ifndef HPOSP2
#define HPOSP2	 0xD002
#endif
#ifndef HPOSP3
#define HPOSP3	 0xD003
#endif

#ifndef HPOSM0
#define HPOSM0	 0xD004
#endif
#ifndef HPOSM1
#define HPOSM1	 0xD005
#endif
#ifndef HPOSM2
#define HPOSM2	 0xD006
#endif
#ifndef HPOSM3
#define HPOSM3	 0xD007
#endif

#ifndef SIZEP0
#define SIZEP0	 0xD008
#endif
#ifndef SIZEP1
#define SIZEP1	 0xD009
#endif
#ifndef SIZEP2
#define SIZEP2	 0xD00A
#endif
#ifndef SIZEP3
#define SIZEP3	 0xD00B
#endif

#ifndef SIZEM
#define SIZEM	 0xD00C
#endif

#ifndef GRAFP0
#define GRAFP0	 0xD00D
#endif
#ifndef GRAFP1
#define GRAFP1	 0xD00E
#endif
#ifndef GRAFP2
#define GRAFP2	 0xD00F
#endif
#ifndef GRAFP3
#define GRAFP3	 0xD010
#endif

#ifndef GRAFM
#define GRAFM	 0xD011
#endif

#ifndef COLPM0
#define COLPM0	 0xD012
#endif
#ifndef COLPM1
#define COLPM1	 0xD013
#endif
#ifndef COLPM2
#define COLPM2	 0xD014
#endif
#ifndef COLPM3
#define COLPM3	 0xD015
#endif

#ifndef COLPF0
#define COLPF0	 0xD016
#endif
#ifndef COLPF1
#define COLPF1	 0xD017
#endif
#ifndef COLPF2
#define COLPF2	 0xD018
#endif
#ifndef COLPF3
#define COLPF3	 0xD019
#endif

#ifndef COLBK
#define COLBK	 0xD01A
#endif

#ifndef PRIOR
#define PRIOR	 0xD01B
#endif
#ifndef VDELAY
#define VDELAY	 0xD01C
#endif
#ifndef GRACTL
#define GRACTL	 0xD01D
#endif
#ifndef HITCLR
#define HITCLR	 0xD01E
#endif

//-------------------------------------------------------------------------
// PBI Address Equates
//-------------------------------------------------------------------------

#ifndef PBI
#define PBI	 0xD100
#endif

// Read Addresses

#ifndef PDVI
#define PDVI	 0xD1FF
#endif

// Write Addresses

#ifndef PDVS
#define PDVS	 0xD1FF
#endif

// PBI RAM Address Equates

#ifndef PBIRAM
#define PBIRAM	 0xD600
#endif

// Parallel Device Address Equates

#ifndef PDID1
#define PDID1	 0xD803
#endif
#ifndef PDIDV
#define PDIDV	 0xD805
#endif
#ifndef PDIRQV
#define PDIRQV	 0xD808
#endif
#ifndef PDID2
#define PDID2	 0xD80B
#endif
#ifndef PDVV
#define PDVV	 0xD80D
#endif

//-------------------------------------------------------------------------
// POKEY Address Equates
//-------------------------------------------------------------------------

#ifndef POKEY
#define POKEY	 0xD200
#endif

// Read Addresses

#ifndef POT0
#define POT0	 0xD200
#endif
#ifndef POT1
#define POT1	 0xD201
#endif
#ifndef POT2
#define POT2	 0xD202
#endif
#ifndef POT3
#define POT3	 0xD203
#endif
#ifndef POT4
#define POT4	 0xD204
#endif
#ifndef POT5
#define POT5	 0xD205
#endif
#ifndef POT6
#define POT6	 0xD206
#endif
#ifndef POT7
#define POT7	 0xD207
#endif

#ifndef ALLPOT
#define ALLPOT	 0xD208
#endif
#ifndef KBCODE
#define KBCODE	 0xD209
#endif
#ifndef RANDOM
#define RANDOM	 0xD20A
#endif
#ifndef SERIN
#define SERIN	 0xD20D
#endif
#ifndef IRQST
#define IRQST	 0xD20E
#endif
#ifndef SKSTAT
#define SKSTAT	 0xD20F
#endif

// Write Addresses

#ifndef AUDF1
#define AUDF1	 0xD200
#endif
#ifndef AUDC1
#define AUDC1	 0xD201
#endif

#ifndef AUDF2
#define AUDF2	 0xD202
#endif
#ifndef AUDC2
#define AUDC2	 0xD203
#endif

#ifndef AUDF3
#define AUDF3	 0xD204
#endif
#ifndef AUDC3
#define AUDC3	 0xD205
#endif

#ifndef AUDF4
#define AUDF4	 0xD206
#endif
#ifndef AUDC4
#define AUDC4	 0xD207
#endif

#ifndef AUDCTL
#define AUDCTL	 0xD208
#endif
#ifndef STIMER
#define STIMER	 0xD209
#endif
#ifndef SKRES
#define SKRES	 0xD20A
#endif
#ifndef POTGO
#define POTGO	 0xD20B
#endif
#ifndef SEROUT
#define SEROUT	 0xD20D
#endif
#ifndef IRQEN
#define IRQEN	 0xD20E
#endif
#ifndef SKCTL
#define SKCTL	 0xD20F
#endif

//-------------------------------------------------------------------------
// PIA Address Equates
//-------------------------------------------------------------------------

#ifndef PIA
#define PIA	 0xD300
#endif

#ifndef PORTA
#define PORTA	 0xD300
#endif
#ifndef PORTB
#define PORTB	 0xD301
#endif

#ifndef PACTL
#define PACTL	 0xD302
#endif
#ifndef PBCTL
#define PBCTL	 0xD303
#endif

//-------------------------------------------------------------------------
// ANTIC Address Equates
//-------------------------------------------------------------------------

#ifndef ANTIC
#define ANTIC	 0xD400
#endif

// Read Addresses

#ifndef VCOUNT
#define VCOUNT	 0xD40B
#endif
#ifndef PENH
#define PENH	 0xD40C
#endif
#ifndef PENV
#define PENV	 0xD40D
#endif
#ifndef NMIST
#define NMIST	 0xD40F
#endif

// Write Addresses

#ifndef DMACTL
#define DMACTL	 0xD400
#endif
#ifndef CHACTL
#define CHACTL	 0xD401
#endif
#ifndef DLISTL
#define DLISTL	 0xD402
#endif
#ifndef DLISTH
#define DLISTH	 0xD403
#endif
#ifndef HSCROL
#define HSCROL	 0xD404
#endif
#ifndef VSCROL
#define VSCROL	 0xD405
#endif
#ifndef PMBASE
#define PMBASE	 0xD407
#endif
#ifndef CHBASE
#define CHBASE	 0xD409
#endif
#ifndef WSYNC
#define WSYNC	 0xD40A
#endif
#ifndef NMIEN
#define NMIEN	 0xD40E
#endif
#ifndef NMIRES
#define NMIRES	 0xD40F
#endif

//-------------------------------------------------------------------------
// Floating Point Package Address Equates
//-------------------------------------------------------------------------

#ifndef AFP
#define AFP	 0xD800
#endif
#ifndef FASC
#define FASC	 0xD8E6
#endif
#ifndef IFP
#define IFP	 0xD9AA
#endif
#ifndef FPI
#define FPI	 0xD9D2
#endif
#ifndef ZFR0
#define ZFR0	 0xDA44
#endif
#ifndef ZF1
#define ZF1	 0xDA46
#endif
#ifndef FSUB
#define FSUB	 0xDA60
#endif
#ifndef FADD
#define FADD	 0xDA66
#endif
#ifndef FMUL
#define FMUL	 0xDADB
#endif
#ifndef FDIV
#define FDIV	 0xDB28
#endif
#ifndef PLYEVL
#define PLYEVL	 0xDD40
#endif
#ifndef FLD0R
#define FLD0R	 0xDD89
#endif
#ifndef FLD0P
#define FLD0P	 0xDD8D
#endif
#ifndef FLD1R
#define FLD1R	 0xDD98
#endif
#ifndef PLD1P
#define PLD1P	 0xDD9C
#endif
#ifndef FST0R
#define FST0R	 0xDDA7
#endif
#ifndef FST0P
#define FST0P	 0xDDAB
#endif
#ifndef FMOVE
#define FMOVE	 0xDDB6
#endif
#ifndef LOG
#define LOG	 0xDECD
#endif
#ifndef LOG10
#define LOG10	 0xDED1
#endif
#ifndef EXP
#define EXP	 0xDDC0
#endif
#ifndef EXP10
#define EXP10	 0xDDCC
#endif

//-------------------------------------------------------------------------
// Device Handler Vector Table Address Equates
//-------------------------------------------------------------------------

#ifndef EDITRV
#define EDITRV	 0xE400
#endif
#ifndef SCRENV
#define SCRENV	 0xE410
#endif
#ifndef KEYBDV
#define KEYBDV	 0xE420
#endif
#ifndef PRINTV
#define PRINTV	 0xE430
#endif
#ifndef CASETV
#define CASETV	 0xE440
#endif

//-------------------------------------------------------------------------
// Jump Vector Address Equates
//-------------------------------------------------------------------------

#ifndef DISKIV
#define DISKIV	 0xE450
#endif
#ifndef DSKINV
#define DSKINV	 0xE453
#endif
#ifndef CIOV
#define CIOV	 0xE456
#endif
#ifndef SIOV
#define SIOV	 0xE459
#endif
#ifndef SETVBV
#define SETVBV	 0xE45C
#endif
#ifndef SYSVBV
#define SYSVBV	 0xE45F
#endif
#ifndef XITVBV
#define XITVBV	 0xE462
#endif
#ifndef SIOINV
#define SIOINV	 0xE465
#endif
#ifndef SENDEV
#define SENDEV	 0xE468
#endif
#ifndef INTINV
#define INTINV	 0xE46B
#endif
#ifndef CIOINV
#define CIOINV	 0xE46E
#endif
#ifndef BLKBDV
#define BLKBDV	 0xE471
#endif
#ifndef WARMSV
#define WARMSV	 0xE474
#endif
#ifndef COLDSV
#define COLDSV	 0xE477
#endif
#ifndef RBLOKV
#define RBLOKV	 0xE47A
#endif
#ifndef CSOPIV
#define CSOPIV	 0xE47D
#endif
#ifndef VCTABL
#define VCTABL	 0xE480
#endif
#ifndef PUPDIV
#define PUPDIV	 0xE480
#endif
#ifndef SLFTSV
#define SLFTSV	 0xE483
#endif
#ifndef PHENTV
#define PHENTV	 0xE486
#endif
#ifndef PHUNLV
#define PHUNLV	 0xE489
#endif
#ifndef PHINIV
#define PHINIV	 0xE48C
#endif
#ifndef GPDVV
#define GPDVV	 0xE48F
#endif

// NOTE: OS rom self-test labels are not included in this file

//-------------------------------------------------------------------------
// Some misc. stuff from the 400/800 rev.B source
//-------------------------------------------------------------------------

// THE FOLLOWING ARE IN BASIC CARTRIDGE:
#ifndef SIN
#define SIN	 0xBD81
#endif
#ifndef COS
#define COS	 0xBD73
#endif
#ifndef ATAN
#define ATAN	 0xBE43
#endif
#ifndef SQR
#define SQR	 0xBEB1
#endif

#ifndef RADON
#define RADON	 0
#endif
#ifndef DEGON
#define DEGON	 6
#endif

#ifndef ASCZER
#define ASCZER	 '0'
#endif
#ifndef COLON
#define COLON	 0x3A
#endif
#ifndef CR
#define CR	 0x9B
#endif

//-------------------------------------------------------------------------
// 6502
//-------------------------------------------------------------------------

#ifndef NMIVEC
#define NMIVEC	 0xFFFA
#endif
#ifndef RESVEC
#define RESVEC	 0xFFFC
#endif
#ifndef IRQVEC
#define IRQVEC	 0xFFFE
#endif

//-------------------------------------------------------------------------
// BASIC
//-------------------------------------------------------------------------

#ifndef LOMEM
#define LOMEM	 0x80
#endif
#ifndef VNTP
#define VNTP	 0x82
#endif
#ifndef VNTD
#define VNTD	 0x84
#endif
#ifndef VVTP
#define VVTP	 0x86
#endif
#ifndef STMTAB
#define STMTAB	 0x88
#endif
#ifndef STMCUR
#define STMCUR	 0x8A
#endif
#ifndef STARP
#define STARP	 0x8C
#endif
#ifndef RUNSTK
#define RUNSTK	 0x8E
#endif
//MEMTOP	 0x90
#ifndef STOPLN
#define STOPLN	 0xBA
#endif
#ifndef ERRSAVE
#define ERRSAVE	 0xC3
#endif
#ifndef PTABW
#define PTABW	 0xC9
#endif

//-------------------------------------------------------------------------
// DOS
//-------------------------------------------------------------------------

#ifndef DOS
#define DOS	 0x0700
#endif

#ifndef RENAME
#define RENAME	 0x20
#endif
#ifndef DELETE
#define DELETE	 0x21
#endif
#ifndef LOCKFL
#define LOCKFL	 0x23
#endif
#ifndef UNLOCK
#define UNLOCK	 0x24
#endif
#ifndef POINT
#define POINT	 0x25
#endif
#ifndef NOTE
#define NOTE	 0x26
#endif
#ifndef FORMAT
#define FORMAT	 0xFE
#endif

// Command line table, Index values for (DOSVEC),Y -- COMTAB
// Compatible with OS/A+, DOS XL and SpartaDOS

#ifndef COMTAB
#define COMTAB	 0
#endif
#ifndef ZCRNAME
#define ZCRNAME	 3
#endif
#ifndef BUFOFF
#define BUFOFF	 10
#endif
#ifndef COMFNAM
#define COMFNAM	 33
#endif
#ifndef LBUF
#define LBUF	 63
#endif

//-------------------------------------------------------------------------
// ATASCII CHARACTER DEFS
//-------------------------------------------------------------------------

#ifndef ATCLR
#define ATCLR	 0x7D
#endif
#ifndef ATRUB
#define ATRUB	 0x7E
#endif
#ifndef ATTAB
#define ATTAB	 0x7F
#endif
#ifndef ATEOL
#define ATEOL	 0x9B
#endif
#ifndef ATDELL
#define ATDELL	 0x9C
#endif
#ifndef ATINSL
#define ATINSL	 0x9D
#endif
#ifndef ATCTAB
#define ATCTAB	 0x9E
#endif
#ifndef ATSTAB
#define ATSTAB	 0x9F
#endif
#ifndef ATBEL
#define ATBEL	 0xFD
#endif
#ifndef ATDEL
#define ATDEL	 0xFE
#endif
#ifndef ATINS
#define ATINS	 0xFF
#endif
#ifndef ATURW
#define ATURW	 0x1C
#endif
#ifndef ATDRW
#define ATDRW	 0x1D
#endif
#ifndef ATLRW
#define ATLRW	 0x1E
#endif
#ifndef ATRRW
#define ATRRW	 0x1F
#endif
#ifndef ATESC
#define ATESC	 0x1B
#endif

//-------------------------------------------------------------------------
// OFFSETS INTO SECTSIZETAB (DIO functions)
//-------------------------------------------------------------------------

#ifndef sst_flag
#define sst_flag      0
#endif
#ifndef sst_sectsize
#define sst_sectsize  1
#endif
#ifndef sst_driveno
#define sst_driveno   3
#endif
#ifndef sst_size
#define sst_size      4
#endif


//-------------------------------------------------------------------------
// OFFSETS INTO dio_phys_pos
//-------------------------------------------------------------------------

#ifndef diopp_head
#define diopp_head    0
#endif
#ifndef diopp_track
#define diopp_track   1
#endif
#ifndef diopp_sector
#define diopp_sector  3
#endif
#ifndef diopp_size
#define diopp_size    5
#endif

//-------------------------------------------------------------------------
// VALUES for dos_type
//-------------------------------------------------------------------------

#ifndef ATARIDOS
#define ATARIDOS      0
#endif
#ifndef SPARTADOS
#define SPARTADOS     1
#endif
#ifndef OSADOS
#define OSADOS        2
#endif
#ifndef MYDOS
#define MYDOS         3
#endif
#ifndef NODOS
#define NODOS         255
#endif

//-------------------------------------------------------------------------
// End of atari.inc
//-------------------------------------------------------------------------

// Additional definitions by Jakub Debski

#define DMACTL_TURN_OFF_PLAYFIELD 0
#define DMACTL_NARROW_PLAYFIELD   1
#define DMACTL_NORMAL_PLAYFIELD   2
#define DMACTL_WIDE_PLAYFIELD     DMACTL_NARROW_PLAYFIELD | DMACTL_NORMAL_PLAYFIELD
#define DMACTL_ENABLE_MISSLE_DMA  4
#define DMACTL_ENABLE_PLAYER_DMA  8
#define DMACTL_SINGLE_LINE_RESOLUTION  0x10
#define DMACTL_DMA_FETCH_INSTRUCTION   0x20

// Defs for GRACTL register
#define PMG_OFF      0
#define PMG_MISSILES 1
#define PMG_PLAYERS  2

// Defs for SIZEP registers
#define SIZEP_SINGLE 0
#define SIZEP_DOUBLE 1
#define SIZEP_QUAD 3
