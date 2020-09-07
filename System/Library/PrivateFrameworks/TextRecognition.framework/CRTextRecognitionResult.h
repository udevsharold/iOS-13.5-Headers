/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray;

@interface CRTextRecognitionResult : NSObject {

	NSArray* _candidates;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomRight;
	CGPoint _bottomLeft;
	CGRect _boundingBox;

}

@property (readonly) NSArray * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (readonly) CGRect boundingBox;                //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) CGPoint topLeft;                   //@synthesize topLeft=_topLeft - In the implementation block
@property (readonly) CGPoint topRight;                  //@synthesize topRight=_topRight - In the implementation block
@property (readonly) CGPoint bottomRight;               //@synthesize bottomRight=_bottomRight - In the implementation block
@property (readonly) CGPoint bottomLeft;                //@synthesize bottomLeft=_bottomLeft - In the implementation block
-(CGRect)boundingBox;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(NSArray *)candidates;
-(id)initWithTextFeature:(id)arg1 options:(id)arg2 ;
@end
