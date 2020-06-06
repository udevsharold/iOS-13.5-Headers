/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSDecoder : NSObject <CSCoderData> {

	NSData* _data;
	id _backingStore;
	const CFAllocatorRef _contentDeallocator;
	SCD_Struct_CS2 _obj;

}

@property (nonatomic,readonly) SCD_Struct_CS3 obj;                                   //@synthesize obj=_obj - In the implementation block
@property (nonatomic,readonly) const CFAllocatorRef contentDeallocator;              //@synthesize contentDeallocator=_contentDeallocator - In the implementation block
@property (nonatomic,readonly) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) id backingStore;                                        //@synthesize backingStore=_backingStore - In the implementation block
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)backingStore;
-(void)setBackingStore:(id)arg1 ;
-(id)decodeObject:(SCD_Struct_CS3)arg1 ;
-(SCD_Struct_CS3)obj;
-(id)decodeObjectNoCopy:(SCD_Struct_CS3)arg1 ;
-(id)initWithData:(id)arg1 obj:(SCD_Struct_CS3)arg2 ;
-(id)decode;
-(const CFAllocatorRef)contentDeallocator;
@end

