/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPParagraph, NSMutableArray;

@interface CPParagraphFlow : NSObject {

	CPParagraph* paragraph;
	double fLeft;
	double fRight;
	double fTop;
	double fBottom;
	NSMutableArray* paragraphsAbove;
	NSMutableArray* paragraphsBelow;
	NSMutableArray* paragraphsLeft;
	NSMutableArray* paragraphsRight;
	BOOL placed;
	BOOL adjacentToCallout;
	int calloutType;
	CPParagraph* nextInColumn;

}

@property (nonatomic,retain) CPParagraph * paragraph; 
@property (assign,nonatomic) CPParagraph * nextInColumn; 
@property (assign) double fLeft; 
@property (assign) double fRight; 
@property (assign) double fBottom; 
@property (assign) BOOL placed; 
@property (assign) int calloutType; 
-(void)dealloc;
-(id)description;
-(int)leftOrder;
-(int)rightOrder;
-(double)area;
-(int)outOrder;
-(int)inOrder;
-(CPParagraph *)paragraph;
-(void)setCalloutType:(int)arg1 ;
-(double)dBelow;
-(double)dAbove;
-(id)paragraphsAbove;
-(int)calloutType;
-(CGRect)belowBounds;
-(id)initWithParagraph:(id)arg1 ;
-(void)setParagraphsAboveIn:(id)arg1 ;
-(void)setParagraphsBelowIn:(id)arg1 ;
-(void)setParagraphsLeftIn:(id)arg1 ;
-(void)setParagraphsRightIn:(id)arg1 ;
-(long long)topDescending:(id)arg1 ;
-(BOOL)placed;
-(void)setPlaced:(BOOL)arg1 ;
-(id)nextParagraphInColumn:(id)arg1 ;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(id)paragraphsLeft;
-(id)paragraphsRight;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 rects:(id)arg3 ;
-(BOOL)intervalOverlapTop:(double)arg1 bottom:(double)arg2 paragraphs:(id)arg3 ;
-(int)inOrder:(BOOL)arg1 ;
-(id)paragraphsBelow;
-(void)setNextInColumn:(CPParagraph *)arg1 ;
-(id)simpleRule:(unsigned)arg1 ;
-(id)ignoreCallouts:(unsigned)arg1 ;
-(id)twoSides:(unsigned)arg1 ;
-(id)belowTwoSides:(unsigned)arg1 ;
-(void)removeFromBelow:(id)arg1 ;
-(void)removeFromAbove:(id)arg1 ;
-(void)replaceBelow:(id)arg1 withOneOf:(id)arg2 ;
-(void)replaceAbove:(id)arg1 withOneOf:(id)arg2 ;
-(void)setParagraph:(CPParagraph *)arg1 ;
-(double)fLeft;
-(void)setFLeft:(double)arg1 ;
-(double)fRight;
-(void)setFRight:(double)arg1 ;
-(double)fBottom;
-(void)setFBottom:(double)arg1 ;
-(CPParagraph *)nextInColumn;
@end

