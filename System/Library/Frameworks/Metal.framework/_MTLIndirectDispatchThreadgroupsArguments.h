/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadgroupsArguments : NSObject {

	SCD_Struct_MT11 _threadgroupsPerGrid;
	SCD_Struct_MT11 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT11 threadgroupsPerGrid;                //@synthesize threadgroupsPerGrid=_threadgroupsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT11 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT11)threadgroupsPerGrid;
-(void)setThreadgroupsPerGrid:(SCD_Struct_MT11)arg1 ;
-(SCD_Struct_MT11)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT11)arg1 ;
@end

