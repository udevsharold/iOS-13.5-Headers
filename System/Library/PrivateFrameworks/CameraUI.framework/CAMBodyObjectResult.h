/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMMetadataObjectResult.h>

@class NSString, AVMetadataBodyObject, AVMetadataObject;

@interface CAMBodyObjectResult : NSObject <CAMMetadataObjectResult> {

	NSString* _uniqueIdentifier;
	AVMetadataBodyObject* __metadataBodyObject;

}

@property (nonatomic,retain) AVMetadataBodyObject * _metadataBodyObject;                 //@synthesize _metadataBodyObject=__metadataBodyObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
-(NSString *)uniqueIdentifier;
-(NSString *)metadataType;
-(AVMetadataObject *)underlyingMetadataObject;
-(id)initWithBodyObject:(id)arg1 ;
-(AVMetadataBodyObject *)_metadataBodyObject;
-(void)set_metadataBodyObject:(AVMetadataBodyObject *)arg1 ;
@end
