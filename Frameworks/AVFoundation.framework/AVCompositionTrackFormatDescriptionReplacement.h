/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {

	opaqueCMFormatDescriptionRef _originalFormatDescription;
	opaqueCMFormatDescriptionRef _replacementFormatDescription;

}

@property (readonly) const opaqueCMFormatDescriptionRef originalFormatDescription; 
@property (readonly) const opaqueCMFormatDescriptionRef replacementFormatDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const opaqueCMFormatDescriptionRef)originalFormatDescription;
-(const opaqueCMFormatDescriptionRef)replacementFormatDescription;
-(id)initWithOriginalFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

