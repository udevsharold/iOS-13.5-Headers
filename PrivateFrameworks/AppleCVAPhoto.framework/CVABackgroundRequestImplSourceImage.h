/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class NSString;

@interface CVABackgroundRequestImplSourceImage : NSObject <CVABackgroundRequest> {

	CVBufferRef _sourceColorPixelBuffer;

}

@property (assign) CVBufferRef sourceColorPixelBuffer;              //@synthesize sourceColorPixelBuffer=_sourceColorPixelBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)sourceColorPixelBuffer;
-(void)setSourceColorPixelBuffer:(CVBufferRef)arg1 ;
@end

