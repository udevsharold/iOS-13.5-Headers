/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultDataContext.h>

@class NSString;

@interface ARPoseContext : NSObject <ARResultDataContext> {

	long long _cameraPosition;
	/*^block*/id _cameraTransformCallback;

}

@property (assign,nonatomic) long long cameraPosition;              //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) id cameraTransformCallback;              //@synthesize cameraTransformCallback=_cameraTransformCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageData;
-(long long)cameraPosition;
-(void)setCameraPosition:(long long)arg1 ;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)cameraTransformCallback;
-(void)setCameraTransformCallback:(id)arg1 ;
@end

