/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKOpenGLRendererDelegate;
#import <DrawingKit/DrawingKit-Structs.h>
@class UIColor;

@interface DKOpenGLRenderer : NSObject {

	BOOL _didNotifyRendererDelegate;
	int mBufferSize;
	unsigned mWetPaintProg;
	unsigned mDryPaintProg;
	unsigned mCompositeProg;
	unsigned mTextureProg;
	unsigned mColorProg;
	unsigned mAttributes;
	unsigned mVbo;
	NSRange mVertexRange;
	vector<Vertex, std::__1::allocator<Vertex> >* mContiguousVertexStorage;
	vector<VertexGroup, std::__1::allocator<VertexGroup> >* mVertexHistory;
	vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> > >* mNonCollisionSegments;
	 U_COLOR;
	vector<Page, std::__1::allocator<Page> >* mPages;
	unsigned mWetPaintBufferFBO;
	unsigned mWetPaintBufferT;
	 mWetPaintBufferSize;
	BOOL mSharedContext;
	BOOL mPaperTexIsShared;
	unsigned mPaperTex;
	 mWinSize;
	 mCanvasSize;
	 mCanvasOffset;
	float mTime;
	float mTimeWetBecameDirty;
	float mParticleLifespan;
	CGRect mDirtyCanvasRegion;
	int mCompositeProgViewportUniformLocation;
	int mCompositeColorUniformLocation;
	int mWetPaintProgTimeUniformLocation;
	int mWetPaintProgSubtractEndPointsOnlyUniformLocation;
	int mWetPaintProgLifespanUniformLocation;
	int mDryPaintProgXCoordOffsetUniformLocation;
	int mColorProgColorUniformLocation;
	int mColorProgModelViewProjectionUniformLocation;
	int mTextureProgModelViewProjectionUniformLocation;
	BOOL _undoEnabled;
	BOOL _ignoreFirstUndoItem;
	BOOL _drawingEnabled;
	BOOL _allowWetComposite;
	id<DKOpenGLRendererDelegate> _delegate;
	UIColor* _inkColor;
	double _lineWidthScale;
	double _backingScale;
	long long _numPages;
	CGSize _contentSize;
	CGRect _bounds;

}

@property (assign,nonatomic,__weak) id<DKOpenGLRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * inkColor;                                        //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic) double lineWidthScale;                                     //@synthesize lineWidthScale=_lineWidthScale - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                             //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isUndoEnabled,nonatomic) BOOL undoEnabled;                     //@synthesize undoEnabled=_undoEnabled - In the implementation block
@property (assign,nonatomic) BOOL ignoreFirstUndoItem;                                  //@synthesize ignoreFirstUndoItem=_ignoreFirstUndoItem - In the implementation block
@property (assign,nonatomic) double backingScale;                                       //@synthesize backingScale=_backingScale - In the implementation block
@property (assign,nonatomic) BOOL drawingEnabled;                                       //@synthesize drawingEnabled=_drawingEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowWetComposite;                                    //@synthesize allowWetComposite=_allowWetComposite - In the implementation block
@property (assign,nonatomic) long long numPages;                                        //@synthesize numPages=_numPages - In the implementation block
-(id)init;
-(void)dealloc;
-(void)clear;
-(id<DKOpenGLRendererDelegate>)delegate;
-(void)setDelegate:(id<DKOpenGLRendererDelegate>)arg1 ;
-(void)undo;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)update;
-(void)teardown;
-(UIColor *)inkColor;
-(void)setInkColor:(UIColor *)arg1 ;
-(long long)numPages;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(BOOL)isUndoEnabled;
-(void)setUndoEnabled:(BOOL)arg1 ;
-(id)snapshotImage;
-(void)draw;
-(double)backingScale;
-(void)didCompleteStroke;
-(void)setNumPages:(long long)arg1 ;
-(void)resetRendererState;
-(id)initWithBounds:(CGRect)arg1 scale:(double)arg2 ;
-(void)setLineWidthScale:(double)arg1 ;
-(void)didBeginNewStroke;
-(void)updateDryForcefully;
-(void)setIgnoreFirstUndoItem:(BOOL)arg1 ;
-(void)redrawEntireDrawingImmediatelyWithLayeredBlending:(BOOL)arg1 ;
-(void)addPoints:(id)arg1 withSegmentLength:(unsigned long long)arg2 ;
-(BOOL)initGL;
-(id)initWithBounds:(CGRect)arg1 scale:(double)arg2 bufferSize:(int)arg3 sharedContext:(BOOL)arg4 ;
-(void)destroyFrameBuffers;
-(void)setAllowWetComposite:(BOOL)arg1 ;
-(void)initializeFrameBuffers;
-(void)didResize;
-(void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(BOOL)arg1 ;
-(BOOL)detectCollision::;
-(void)updateWet;
-(CGRect)regionWithVertices:(vector<Vertex, std::__1::allocator<Vertex> >*)arg1 withInflationAmount:(float)arg2 ;
-(void)updateDryCycleIncludingComposite:(BOOL)arg1 ;
-(void)renderToWetPaintBufferWithRange:(NSRange)arg1 ;
-(void)renderToDryPaintBuffer;
-(void)renderToComposite:(BOOL)arg1 ;
-(void)clearWetPaintBuffer;
-(void)drawComposite;
-(void)removeVertexHistoryElement;
-(void)updateVertexControllerWithData:(vector<Vertex, std::__1::allocator<Vertex> >*)arg1 range:(NSRange)arg2 allowWet:(BOOL)arg3 ;
-(void)clearDryPaintBuffer;
-(void)clearComposite;
-(void)appendVertexHistoryElement;
-(void)setBackingScale:(double)arg1 ;
-(CGRect)getVertexBounds;
-(BOOL)canvasIsEmpty;
-(void)updateVertexControllerWithDataRange:(NSRange)arg1 allowWet:(BOOL)arg2 ;
-(double)lineWidthScale;
-(BOOL)ignoreFirstUndoItem;
-(BOOL)allowWetComposite;
@end

