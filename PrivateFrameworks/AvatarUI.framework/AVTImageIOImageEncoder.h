/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTImageIOImageEncoder : NSObject <AVTImageEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeIdentifier;
+(id)addImageOptions;
-(id)fileExtension;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)imageFromImageSource:(CGImageSourceRef)arg1 error:(id*)arg2 ;
@end

