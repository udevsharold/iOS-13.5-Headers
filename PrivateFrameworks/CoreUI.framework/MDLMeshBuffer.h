/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBuffer <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(unsigned long long)length;
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)type;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2;
-(id<MDLMeshBufferAllocator>)allocator;

@end

