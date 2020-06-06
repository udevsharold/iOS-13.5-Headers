/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutManagerDelegate <NSObject>
@optional
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
-(void)layoutManagerDidInvalidateLayout:(id)arg1;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
-(BOOL)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
-(BOOL)layoutManager:(id)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg2;
-(CGRect*)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6;
-(double)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(double)layoutManager:(id)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(double)layoutManager:(id)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6;
-(void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(CGSize)arg3;

@end

