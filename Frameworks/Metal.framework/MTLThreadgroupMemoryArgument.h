/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {

	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _dataType;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(void)setStructType:(id)arg1 ;
-(id)threadgroupMemoryStructType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9 ;
-(unsigned long long)threadgroupMemoryAlignment;
-(unsigned long long)threadgroupMemoryDataSize;
-(unsigned long long)threadgroupMemoryDataType;
@end

