/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
@optional
-(void)setListIndex:(unsigned long long)arg1;
-(BOOL)commitAndWaitUntilSubmitted;
-(void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(unsigned long long)protectionOptions;
-(unsigned long long)globalTraceObjectID;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)debugCommandEncoder;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(void)commitAndHold;
-(void)setProtectionOptions:(unsigned long long)arg1;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3;
-(void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(unsigned long long)getListIndex;

@required
-(NSMutableDictionary *)userDictionary;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1;
-(void)addPurgedResource:(id)arg1;
-(void)addPurgedHeap:(id)arg1;
-(NSDictionary *)profilingResults;

@end

