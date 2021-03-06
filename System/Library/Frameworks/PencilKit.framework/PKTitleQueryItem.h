/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString;

@interface PKTitleQueryItem : NSObject {

	NSString* _transcribedTitle;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSString * transcribedTitle;              //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
-(CGRect)bounds;
-(NSString *)transcribedTitle;
-(id)initWithTranscribedTitle:(id)arg1 bounds:(CGRect)arg2 ;
@end

