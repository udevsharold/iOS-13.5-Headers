/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CKPackageSection : NSObject {

	long long _index;
	NSData* _signature;
	unsigned long long _size;

}

@property (nonatomic,readonly) long long index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * signature;                 //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(id)description;
-(unsigned long long)size;
-(long long)index;
-(void)setSize:(unsigned long long)arg1 ;
-(NSData *)signature;
-(id)CKPropertiesDescription;
-(id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3 ;
@end

