/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreText/CTGlyphStorageInterface.h>

@class NSATSTypesetter, NSString;

@interface NSATSGlyphStorage : CTGlyphStorageInterface {

	CTGlyphStorageRef _glyphStorage;
	CFArrayRef _masterRuns;
	NSATSTypesetter* _typesetter;
	SCD_Struct_NS15* _runs;
	long long _numRuns;
	long long _runBufferSize;
	NSRange _glyphRange;
	NSRange _characterRange;
	long long _bufferSize;
	NSATSGlyphStorage* _parent;
	CFSetRef _children;
	long long _paraEndElasticCharIndex;
	double _paraEndElasticCharWidth;
	NSString* _textString;
	SCD_Struct_NS18* _stack;
	const SCD_Struct_NS15* _lastElasticRun;
	long long _lastElasticRunLocation;
	long long _totalAbsorbedCount;
	struct {
		unsigned _hasNonNominalGlyph : 1;
		unsigned _hasPositionalStake : 1;
		unsigned _hasBidiRun : 1;
		unsigned _isEllipsisStorage : 1;
		unsigned _hasNonNominalStringIndexes : 1;
		unsigned _isUnordered : 1;
		unsigned _hasTotalAbsorbedCount : 1;
		unsigned _reserved : 25;
	}  _gFlags;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(void)_invalidate;
-(void)disposeGlyphStack;
-(CTGlyphStorageRef)createCopy:(SCD_Struct_NS10)arg1 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long long)arg2 ;
-(void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long long)arg2 ;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 forIndex:(long long)arg2 ;
-(void)setStringIndex:(long long)arg1 forIndex:(long long)arg2 ;
-(void)insertGlyphs:(SCD_Struct_NS10)arg1 ;
-(void)swapGlyph:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsTo:(long long)arg1 from:(SCD_Struct_NS10)arg2 ;
-(void)initGlyphStack:(long long)arg1 ;
-(void)pushGlyph:(long long)arg1 ;
-(void)popGlyph:(long long)arg1 ;
-(id)typesetter;
-(id)initWithTypesetter:(id)arg1 ;
-(void)setGlyphRange:(NSRange)arg1 characterRange:(NSRange)arg2 ;
-(CTTypesetterRef)createCTTypesetter;
-(void)_flushCachedObjects;
-(id)childGlyphStorageWithCharacterRange:(NSRange)arg1 ;
-(CTRunRef)_createEllipsisRunWithStringRange:(SCD_Struct_NS10)arg1 attributes:(CFDictionaryRef)arg2 ;
-(BOOL)_resolvePositionalStakeGlyphsForLineFragment:(CTLineRef)arg1 lineFragmentRect:(CGRect)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 maxLineFragmentWidth:(double)arg5 breakHint:(long long*)arg6 ;
-(NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long long)arg1 minimumCharacterIndex:(long long)arg2 ;
-(double)_widthForStringRange:(NSRange)arg1 ;
-(const SCD_Struct_NS15*)_attributeRunForCharacterAtIndex:(long long)arg1 ;
@end

