/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLCppContainer.h>

@class NSData;

@interface CLCppEncodableDataContainer : CLCppContainer {

	NSData* _serialized;
	id _compatibilityInfo;
	/*^block*/id _encoder;

}

@property (nonatomic,copy) NSData * serialized;               //@synthesize serialized=_serialized - In the implementation block
@property (nonatomic,copy) id compatibilityInfo;              //@synthesize compatibilityInfo=_compatibilityInfo - In the implementation block
@property (nonatomic,copy) id encoder;                        //@synthesize encoder=_encoder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithObject:(void*)arg1 cppDataEncoder:(/*^block*/id)arg2 destructor:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObject:(void*)arg1 cppDataEncoder:(/*^block*/id)arg2 destructor:(/*^block*/id)arg3 ;
-(void)setEncoder:(id)arg1 ;
-(void)setSerialized:(NSData *)arg1 ;
-(void)setCompatibilityInfo:(id)arg1 ;
-(id)encoder;
-(NSData *)serialized;
-(id)compatibilityInfo;
@end
