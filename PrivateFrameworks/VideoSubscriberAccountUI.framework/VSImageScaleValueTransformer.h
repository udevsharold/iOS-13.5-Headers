/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <Foundation/NSValueTransformer.h>

@interface VSImageScaleValueTransformer : NSValueTransformer {

	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

