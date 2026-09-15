// mstreetfighter - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: msf  Canvas: Game

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

// Globais do jogo
int Game_count = 0;
// Globais de estado
void* _self = 0;
int Intro_flag = 0;
int Intro_seq = 0;
int Intro_count = 0;
int MapCanvas_still = 0;
int MapCanvas_mode = 0;
int MapCanvas_lightflag = 0;
int MapCanvas_OFFX = 0;
int MapCanvas_OFFY = 50;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;


// Globais do jogo (do <clinit> e <init>)
int MapCanvas_OFFY = 50;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;

PSP_MODULE_INFO("mstreetfighter", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct Game_s Game;
typedef struct GifDecoder_s GifDecoder;
typedef struct Intro_s Intro;
typedef struct MapCanvas_s MapCanvas;

extern MapCanvas* msf_mc;
typedef struct MatrixImage_s MatrixImage;
typedef struct Role_Lee_s Role_Lee;
typedef struct Role_Ryu_s Role_Ryu;
typedef struct msf_s msf;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: Game (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_RUN
struct Game_s {
    int             speed;  // speed (I)
    int             count;  // count (I)
    int             IM;  // IM (I)
    int             IA;  // IA (I)
    int             IC;  // IC (I)
    int64_t         ofusc_00c0;  // À (J)
    int             ofusc_00c1;  // Á (I)
    int             ofusc_00c2;  // Â (I)
    int             ofusc_00c3;  // Ã (I)
    int             ofusc_00c4;  // Ä (I)
    int             ofusc_00c5;  // Å (I)
};

// === Classe: GifDecoder (extends Object) ===
// Padroes detectados: USA_IMAGE
struct GifDecoder_s {
    int             ofusc_00c6;  // Æ (I)
    int*            ofusc_00c7;  // Ç ([I)
    int             ofusc_00c8;  // È (I)
    int             ofusc_00c9;  // É (I)
    int             ofusc_00ca;  // Ê (I)
    int             ofusc_00cb;  // Ë (I)
    int             ofusc_00cc;  // Ì (I)
    int             ofusc_00cd;  // Í (Z)
    int*            ofusc_00ce;  // Î ([I)
    int             ofusc_00cf;  // Ï (I)
    int             ofusc_00d0;  // Ð (I)
    int             ofusc_00d1;  // Ñ (I)
    int             ofusc_00d2;  // Ò (I)
    int             ofusc_00d3;  // Ó (I)
    int             ofusc_00d4;  // Ô (Z)
    int             ofusc_00d5;  // Õ (Z)
    int*            ofusc_00d6;  // Ö ([I)
    int             ofusc_00d8;  // Ø (I)
    int             ofusc_00d9;  // Ù (Z)
    int             ofusc_00da;  // Ú (I)
    int64_t         ofusc_00db;  // Û (J)
    int             ofusc_00dc;  // Ü (I)
    int*            ofusc_00dd;  // Ý ([I)
    int*            ofusc_00de;  // Þ ([I)
    int             ofusc_00df;  // ß (I)
    int             ofusc_00e0;  // à (I)
    signed char*    ofusc_00e1;  // á ([B)
    int             ofusc_00e2;  // â (Z)
    MatrixImage*    matrix;  // matrix (LMatrixImage;)
};

// === Classe: Intro (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_RUN
struct Intro_s {
    int             seq;  // seq (I)
    int             flag;  // flag (Z)
    int             count;  // count (I)
};

// === Classe: MapCanvas (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, USA_IMAGE
struct MapCanvas_s {
    int             mode;  // mode (I)
    int             CanvasWidth;  // CanvasWidth (I)
    int             CanvasHeight;  // CanvasHeight (I)
    int             GameWidth;  // GameWidth (I)
    int             GameHeight;  // GameHeight (I)
    Graphics*       G;  // G (Ljavax/microedition/lcdui/Graphics;)
    Image*          offimage;  // offimage (Ljavax/microedition/lcdui/Image;)
    Graphics*       offscreen;  // offscreen (Ljavax/microedition/lcdui/Graphics;)
    int             still;  // still (Z)
    int             OFFX;  // OFFX (I)
    int             OFFY;  // OFFY (I)
    int             lightflag;  // lightflag (I)
    Font*           ofusc_00e3;  // ã (Ljavax/microedition/lcdui/Font;)
    String*         ofusc_00e4;  // ä (Ljava/lang/String;)
    String*         ofusc_00e5;  // å (Ljava/lang/String;)
    String*         ofusc_00e6;  // æ (Ljava/lang/String;)
    Image*          ofusc_00e7;  // ç (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00e8;  // è (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00e9;  // é (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00ea;  // ê (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00eb;  // ë (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00ec;  // ì (Ljavax/microedition/lcdui/Image;)
    Image*          ofusc_00ed;  // í (Ljavax/microedition/lcdui/Image;)
    MatrixImage*    ofusc_00ee;  // î (LMatrixImage;)
    MatrixImage*    ofusc_00ef;  // ï (LMatrixImage;)
    MatrixImage*    ofusc_00f0;  // ð (LMatrixImage;)
    MatrixImage*    ofusc_00f1;  // ñ (LMatrixImage;)
    MatrixImage*    ofusc_00f2;  // ò (LMatrixImage;)
    int             ofusc_00f3;  // ó (I)
    MatrixImage*    ofusc_00f4;  // ô (LMatrixImage;)
    MatrixImage*    ofusc_00f5;  // õ (LMatrixImage;)
    MatrixImage*    ofusc_00f6;  // ö (LMatrixImage;)
    MatrixImage*    ofusc_00f8;  // ø (LMatrixImage;)
    MatrixImage*    ofusc_00f9;  // ù (LMatrixImage;)
    int             ofusc_00fa;  // ú (I)
    MatrixImage*    ofusc_00fb;  // û (LMatrixImage;)
    int             ofusc_00fc;  // ü (Z)
    int             ofusc_00fd;  // ý (I)
    int             ofusc_00fe;  // þ (I)
    Role_Ryu*       ofusc_00ff;  // ÿ (LRole_Ryu;)
    Role_Lee*       ofusc_0100;  // Ā (LRole_Lee;)
    int             ofusc_0101;  // ā (I)
    int             ofusc_0102;  // Ă (I)
};

// === Classe: MatrixImage (extends Object) ===
// Padroes detectados: TEM_PAINT
struct MatrixImage_s {
    int             width;  // width (I)
    int             height;  // height (I)
    int**           matrix;  // matrix ([[I)
};

// === Classe: Role_Lee (extends Object) ===
// Padroes detectados: TEM_PAINT, USA_IMAGE
struct Role_Lee_s {
    int             x;  // x (I)
    int             y;  // y (I)
    int             status;  // status (I)
    int             ofusc_0103;  // ă (I)
    int             ofusc_0104;  // Ą (I)
    int             ofusc_0105;  // ą (I)
    int             count;  // count (I)
    int             ofusc_0106;  // Ć (I)
    int             ofusc_0107;  // ć (Z)
    Image*          ofusc_0108;  // Ĉ (Ljavax/microedition/lcdui/Image;)
    Graphics*       ofusc_0109;  // ĉ (Ljavax/microedition/lcdui/Graphics;)
};

// === Classe: Role_Ryu (extends Object) ===
// Padroes detectados: TEM_PAINT, USA_IMAGE
struct Role_Ryu_s {
    int             x;  // x (I)
    int             y;  // y (I)
    int             status;  // status (I)
    int             ofusc_0103;  // ă (I)
    int             ofusc_0104;  // Ą (I)
    int             ofusc_0105;  // ą (I)
    int             count;  // count (I)
    int             ofusc_010a;  // Ċ (I)
    int             ofusc_010b;  // ċ (I)
    int             ofusc_0107;  // ć (Z)
    Image*          ofusc_0108;  // Ĉ (Ljavax/microedition/lcdui/Image;)
    Graphics*       ofusc_0109;  // ĉ (Ljavax/microedition/lcdui/Graphics;)
};

// === Classe: msf (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP
struct msf_s {
    Display*        display;  // display (Ljavax/microedition/lcdui/Display;)
    MapCanvas*      mc;  // mc (LMapCanvas;)
    Command*        CommandPlay;  // CommandPlay (Ljavax/microedition/lcdui/Command;)
    Command*        CommandExit;  // CommandExit (Ljavax/microedition/lcdui/Command;)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === Game.Game_constructor (()V) ===
// Instrucoes: 18
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
void Game_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Game.Game_sleep ((I)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/lang/Thread.sleep -> j2me_sleep
void Game_sleep() {
    // TODO: traduzir logica do bytecode
}

// === Game.Game_randomInt (()I) ===
// Instrucoes: 19
int Game_randomInt() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Game.Game_run (()V) ===
// Instrucoes: 215
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
void Game_run() {
    // TODO: traduzir logica do bytecode
}

// === GifDecoder.GifDecoder_constructor (([B)V) ===
// Instrucoes: 75
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void GifDecoder_constructor() {
    // TODO: traduzir logica do bytecode
}

// === GifDecoder.GifDecoder_constructor_2 ((Ljava/io/InputStream;)V) ===
// Instrucoes: 140
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x java/io/InputStream.read -> ??? java/io/InputStream.read
//   1x java/lang/System.arraycopy -> memcpy
void GifDecoder_constructor_2() {
    // TODO: traduzir logica do bytecode
}

// === GifDecoder.GifDecoder_decodeMatrix (()LMatrixImage;) ===
// Instrucoes: 10
MatrixImage* GifDecoder_decodeMatrix() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_decodeImage (()Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 4
Image* GifDecoder_decodeImage() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_decodeImage_2 ((I)Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 72
Image* GifDecoder_decodeImage_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_clear (()V) ===
// Instrucoes: 16
void GifDecoder_clear() {
    // TODO: traduzir logica do bytecode
}

// === GifDecoder.GifDecoder_ofusc_00c6 (()Ljavax/microedition/lcdui/Image;) ===
// Instrucoes: 300
// APIs usadas:
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.drawLine -> ??? javax/microedition/lcdui/Graphics.drawLine
Image* GifDecoder_ofusc_00c6() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00c7 ((I)I) ===
// Instrucoes: 83
int GifDecoder_ofusc_00c7() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00c8 (()V) ===
// Instrucoes: 16
void GifDecoder_ofusc_00c8() {
    // TODO: traduzir logica do bytecode
}

// === GifDecoder.GifDecoder_ofusc_00c9 (()Z) ===
// Instrucoes: 52
int GifDecoder_ofusc_00c9() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00ca (()Z) ===
// Instrucoes: 72
int GifDecoder_ofusc_00ca() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00cb (()Z) ===
// Instrucoes: 88
int GifDecoder_ofusc_00cb() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00cc ((IZ)Z) ===
// Instrucoes: 50
int GifDecoder_ofusc_00cc() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00cd (()Z) ===
// Instrucoes: 47
int GifDecoder_ofusc_00cd() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00ce (()I) ===
// Instrucoes: 21
int GifDecoder_ofusc_00ce() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00cf ((I)Z) ===
// Instrucoes: 43
int GifDecoder_ofusc_00cf() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00d0 ((II)I) ===
// Instrucoes: 6
int GifDecoder_ofusc_00d0() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === GifDecoder.GifDecoder_ofusc_00d1 ((II)Z) ===
// Instrucoes: 9
int GifDecoder_ofusc_00d1() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === Intro.Intro_constructor (()V) ===
// Instrucoes: 9
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
void Intro_constructor() {
    // TODO: traduzir logica do bytecode
}

// === Intro.Intro_sleep ((I)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/lang/Thread.sleep -> j2me_sleep
void Intro_sleep() {
    // TODO: traduzir logica do bytecode
}

// === Intro.Intro_run (()V) ===
// Instrucoes: 43
// APIs usadas:
//   3x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   3x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
void Intro_run() {
    // TODO: traduzir logica do bytecode
}

// === MapCanvas.MapCanvas_constructor (()V) ===
// Instrucoes: 21
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
void MapCanvas_constructor() {
    // TODO: traduzir logica do bytecode
}

// === MapCanvas.MapCanvas_init (()V) ===
// Instrucoes: 251
// APIs usadas:
//   8x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   7x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   6x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void MapCanvas_init() {
    // TODO: traduzir logica do bytecode
}

// === MapCanvas.MapCanvas_CreateGifMatrixImage ((Ljava/lang/String;)LMatrixImage;) ===
// Instrucoes: 24
// APIs usadas:
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/io/InputStream.close -> ??? java/io/InputStream.close
MatrixImage* MapCanvas_CreateGifMatrixImage() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === MapCanvas.MapCanvas_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 400
// APIs usadas:
//   11x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   8x javax/microedition/lcdui/Font.getHeight -> ??? javax/microedition/lcdui/Font.getHeight
//   6x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   5x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   4x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Graphics.getFont -> ??? javax/microedition/lcdui/Graphics.getFont
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x java/lang/Thread.start -> j2me_thread_start
void MapCanvas_paint(void* arg1) {
    MapCanvas* s = (MapCanvas*)_self;
    if (!s) return;
    
    // Setup: fundo preto
    j2me_clip_push(0, 0, MapCanvas_CanvasWidth, MapCanvas_CanvasHeight);
    j2me_gfx_set_color(0x000000);
    j2me_gfx_fill_rect(0, 0, MapCanvas_CanvasWidth, MapCanvas_CanvasHeight);
    
    // Desenha Lee e Ryu
    Role_Lee_paint(NULL);
    Role_Ryu_paint(NULL);
    
    // Barras de vida (HP)
    j2me_gfx_set_color(0x5B5B5B);
    int hp_r = s->ofusc_0101 / 5;
    j2me_gfx_fill_rect(4, MapCanvas_OFFY + 4, 4, hp_r);
    int hp_l = s->ofusc_0102 / 5;
    j2me_gfx_fill_rect(MapCanvas_CanvasWidth - 8, MapCanvas_OFFY + 4, 4, hp_l);
    
    // K.O. / Time Up
    if (s->ofusc_0101 <= 0 || s->ofusc_0102 <= 0) {
        const char* msg = (s->ofusc_0102 <= 0) ? "K.O." : "TIME UP";
        j2me_gfx_set_color(0x4A4A4A);
        j2me_gfx_fill_rect(160, MapCanvas_OFFY + 100, 160, 20);
        j2me_gfx_set_color(0x000000);
        j2me_font_draw(msg, 230, MapCanvas_OFFY + 105);
    }
    
    MapCanvas_still = 1;
}

// ===== PROTOTIPOS (auto-gerados) =====
void Role_Ryu_constructor();
void Role_Ryu_reset();
void Role_Lee_reset();
void* j2me_image_get_graphics(void* img);
void Role_Lee_constructor();
void* j2me_image_get_graphics(void* img);
void Role_Ryu_forward();
void Role_Ryu_backward();
void Role_Ryu_punch();
void Role_Ryu_kick();
void Role_Ryu_fire();
void Role_Lee_forward();
void Role_Lee_backward();
void Role_Lee_punch();
void Role_Lee_kick();
void Role_Lee_fire();
void* _role_self = 0;
void* _p1_self = 0;
void* _p2_self = 0;

// === MapCanvas.MapCanvas_keyProc ((I)V) ===
// Instrucoes: 43
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void MapCanvas_keyProc() {
    // Traduzido do bytecode (43 instrucoes)
    // Detecta direcao e chama metodo correspondente
    int acoes = j2me_input_get_actions();
    Role_Ryu* p1 = (Role_Ryu*)_p1_self;
    if (!p1) return;
    if (acoes & J2ME_LEFT)       Role_Ryu_backward();
    else if (acoes & J2ME_RIGHT) Role_Ryu_forward();
    if (j2me_input_is_pressed(J2ME_UP))    Role_Ryu_punch();
    if (j2me_input_is_pressed(J2ME_FIRE))  Role_Ryu_kick();
}

// === MapCanvas.MapCanvas_keyPressed ((I)V) ===
// Instrucoes: 4
void MapCanvas_keyPressed() {
    // Traduzido do bytecode (4 instrucoes)
    // Chama keyProc(self, arg0) — mas sem self explicito, so le input
    int acoes = j2me_input_get_actions();
    (void)acoes;
    // TODO: chamar keyProc com self e arg0 quando tivermos o loop
}

// === MapCanvas.MapCanvas_keyRepeated ((I)V) ===
// Instrucoes: 4
void MapCanvas_keyRepeated() {
    // TODO: traduzir logica do bytecode
}

// === MatrixImage.MatrixImage_constructor ((II)V) ===
// Instrucoes: 14
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void MatrixImage_constructor() {
    // TODO: traduzir logica do bytecode
}

// === MatrixImage.MatrixImage_crop ((IIII)LMatrixImage;) ===
// Instrucoes: 38
MatrixImage* MatrixImage_crop() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === MatrixImage.MatrixImage_setColor ((III)V) ===
// Instrucoes: 8
void MatrixImage_setColor() {
    // TODO: traduzir logica do bytecode
}

// === MatrixImage.MatrixImage_paint ((Ljavax/microedition/lcdui/Graphics;II)V) ===
// Instrucoes: 43
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void MatrixImage_paint(void* self, void* g, int x, int y) {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_constructor (()V) ===
// Instrucoes: 27
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void Role_Lee_constructor() {
    Role_Lee* s = (Role_Lee*)_role_self;
    if (!s) return;
    s->status = 0;
    s->ofusc_0103 = 0;
    s->count = 0;
    s->ofusc_0106 = 0;
    Role_Lee_reset();
    s->ofusc_0108 = (void*)j2me_image_create(16, 35);
    s->ofusc_0109 = j2me_image_get_graphics(s->ofusc_0108);
}

// === Role_Lee.Role_Lee_reset (()V) ===
// Instrucoes: 25
void Role_Lee_reset() {
    // Traduzido do bytecode (25 instrucoes)
    Role_Lee* s = (Role_Lee*)_role_self;
    if (!s) return;
    s->x = MapCanvas_CanvasWidth - 20;
    s->y = MapCanvas_OFFY + 44;
    s->status = 0;
    s->ofusc_0103 = 0;
    s->ofusc_0104 = MapCanvas_CanvasWidth - 16;
    s->ofusc_0107 = 1;
}

// === Role_Lee.Role_Lee_forward (()V) ===
// Instrucoes: 29
void Role_Lee_forward() {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_backward (()V) ===
// Instrucoes: 22
void Role_Lee_backward() {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_punch (()V) ===
// Instrucoes: 47
void Role_Lee_punch() {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_kick (()V) ===
// Instrucoes: 47
void Role_Lee_kick() {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_fire (()V) ===
// Instrucoes: 29
void Role_Lee_fire() {
    // TODO: traduzir logica do bytecode
}

// === Role_Lee.Role_Lee_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 162
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void Role_Lee_paint(void* arg1) {
    Role_Lee* s = (Role_Lee*)_role_self;
    if (!s || !msf_mc) return;
    if (s->status == 0) {
        if ((Game_count % 300) == 150) {
            s->ofusc_0105 ^= 1;
            s->ofusc_0107 = 1;
        }
        if (s->ofusc_0107 == 1) {
            s->ofusc_0107 = 0;
            MatrixImage_paint(msf_mc->ofusc_00f4, arg1, s->x + s->ofusc_0105, s->y + s->ofusc_0105);
            j2me_image_blit((J2MEImage*)s->ofusc_0109, -(s->x) - s->ofusc_0105, -(s->y) - s->ofusc_0105);
        } else {
            j2me_image_blit((J2MEImage*)s->ofusc_0108, s->x + s->ofusc_0105, s->y + s->ofusc_0105);
        }
    } else if (s->status == 1) {
        MatrixImage_paint(msf_mc->ofusc_00f5, arg1, s->x, s->y);
        s->count--; if (s->count <= 0) s->status = 0;
    } else if (s->status == 2) {
        MatrixImage_paint(msf_mc->ofusc_00f6, arg1, s->x, s->y);
        s->count--; if (s->count <= 0) s->status = 0;
    } else if (s->status == 3) {
        if (msf_mc->ofusc_00fa > 0) s->x = msf_mc->ofusc_00fa;
        s->ofusc_0106 ^= 1;
        if (s->ofusc_0106 == 1) MatrixImage_paint(msf_mc->ofusc_00f8, arg1, s->x, s->y);
        else                     MatrixImage_paint(msf_mc->ofusc_00f9, arg1, s->x, s->y);
    }
}

// === Role_Ryu.Role_Ryu_constructor (()V) ===
// Instrucoes: 30
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void Role_Ryu_constructor() {
    Role_Ryu* s = (Role_Ryu*)_role_self;
    if (!s) return;
    s->status = 0;
    s->ofusc_0103 = 0;
    s->count = 0;
    s->ofusc_010a = 0;
    s->ofusc_010b = 0;
    Role_Ryu_reset();
    s->ofusc_0108 = (void*)j2me_image_create(19, 41);
    s->ofusc_0109 = j2me_image_get_graphics(s->ofusc_0108);
}

// === Role_Ryu.Role_Ryu_reset (()V) ===
// Instrucoes: 23
void Role_Ryu_reset() {
    // Traduzido do bytecode (23 instrucoes)
    // NOTA: precisa receber self como void* — vamos usar global temporaria
    Role_Ryu* s = (Role_Ryu*)_role_self;
    if (!s) return;
    s->x = 4;
    s->y = MapCanvas_OFFY + 39;
    s->status = 0;
    s->ofusc_0103 = 0;
    s->ofusc_0104 = MapCanvas_CanvasWidth - 16;
    s->ofusc_0107 = 1;
}

// === Role_Ryu.Role_Ryu_forward (()V) ===
// Instrucoes: 51
void Role_Ryu_forward() {
    // TODO: traduzir logica do bytecode
}

// === Role_Ryu.Role_Ryu_backward (()V) ===
// Instrucoes: 37
void Role_Ryu_backward() {
    // TODO: traduzir logica do bytecode
}

// === Role_Ryu.Role_Ryu_punch (()V) ===
// Instrucoes: 62
void Role_Ryu_punch() {
    // TODO: traduzir logica do bytecode
}

// === Role_Ryu.Role_Ryu_kick (()V) ===
// Instrucoes: 62
void Role_Ryu_kick() {
    // TODO: traduzir logica do bytecode
}

// === Role_Ryu.Role_Ryu_fire (()V) ===
// Instrucoes: 34
void Role_Ryu_fire() {
    // TODO: traduzir logica do bytecode
}

// === Role_Ryu.Role_Ryu_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 145
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void Role_Ryu_paint(void* arg1) {
    Role_Ryu* s = (Role_Ryu*)_role_self;
    if (!s || !msf_mc) return;
    if (s->status == 0) {
        if ((Game_count % 300) == 0) {
            s->ofusc_0105 ^= 1;
            s->ofusc_0107 = 1;
        }
        if (s->ofusc_0107 == 1) {
            s->ofusc_0107 = 0;
            MatrixImage_paint(msf_mc->ofusc_00ee, arg1, s->x + s->ofusc_0105, s->y + s->ofusc_0105);
            j2me_image_blit((J2MEImage*)s->ofusc_0109, -(s->x) - s->ofusc_0105, -(s->y) - s->ofusc_0105);
        } else {
            j2me_image_blit((J2MEImage*)s->ofusc_0108, s->x + s->ofusc_0105, s->y + s->ofusc_0105);
        }
    } else if (s->status == 1) {
        MatrixImage_paint(msf_mc->ofusc_00ef, arg1, s->x, s->y);
        s->count--; if (s->count <= 0) s->status = 0;
    } else if (s->status == 2) {
        MatrixImage_paint(msf_mc->ofusc_00f0, arg1, s->x, s->y);
        s->count--; if (s->count <= 0) s->status = 0;
    } else if (s->status == 3) {
        MatrixImage_paint(msf_mc->ofusc_00f1, arg1, s->x, s->y + 6);
        s->count--; if (s->count <= 0) s->status = 0;
    }
}

// === msf.msf_constructor (()V) ===
// Instrucoes: 3
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
void msf_constructor() {
    // TODO: traduzir logica do bytecode
}

// === msf.msf_startApp (()V) ===
// Instrucoes: 36
// APIs usadas:
//   2x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void msf_startApp() {
    // TODO: traduzir logica do bytecode
}

// === msf.msf_sleep ((I)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/lang/Thread.sleep -> j2me_sleep
void msf_sleep() {
    // TODO: traduzir logica do bytecode
}

// === msf.msf_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 53
// APIs usadas:
//   2x javax/microedition/lcdui/Displayable.removeCommand -> ??? javax/microedition/lcdui/Displayable.removeCommand
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
//   1x java/lang/Thread.start -> j2me_thread_start
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void msf_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === msf.msf_pauseApp (()V) ===
// Instrucoes: 1
void msf_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === msf.msf_destroyApp ((Z)V) ===
// Instrucoes: 1
void msf_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================


// Definicao das globais
MapCanvas* msf_mc = 0;

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // msf_startApp();
        // Game_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
