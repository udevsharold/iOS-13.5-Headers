/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MDLMeshBufferMap : NSObject {

	/*^block*/id _deallocator;
	void* _bytes;

}

@property (nonatomic,readonly) void* bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)dealloc;
-(void*)bytes;
-(id)initWithBytes:(void*)arg1 deallocator:(/*^block*/id)arg2 ;
@end
