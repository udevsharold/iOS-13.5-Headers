/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSDate, PDFPageLayerEffect;

@interface PDFCoachMark : NSObject {

	NSDate* creationTime;
	CGRect frame;
	PDFPageLayerEffect* layerEffect;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)playEffect:(id)arg1 ;
-(double)effectTimeLeft;
@end
