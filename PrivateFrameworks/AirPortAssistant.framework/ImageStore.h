/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@interface ImageStore : NSObject
+(id)imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3 ;
+(id)imageForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5 ;
+(id)imageNameForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5 useDataCache:(BOOL*)arg6 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 deviceKind:(int)arg2 audioImage:(BOOL)arg3 small:(BOOL)arg4 ;
+(id)imageNameForProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6 ;
+(id)kitImageOfType:(long long)arg1 ;
+(id)sharedImageStore;
+(id)imageForInformationalDiagram:(unsigned)arg1 ;
+(double)informationDiagramBaseImageCenterOffset:(unsigned)arg1 small:(BOOL)arg2 ;
+(double)informationDiagramBaseImageRightEdgeInset:(unsigned)arg1 small:(BOOL)arg2 ;
+(id)imageForInformationalDiagramNamed:(id)arg1 small:(BOOL)arg2 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 ;
+(id)imageForBaseStationWithProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6 ;
+(CGImageRef)cgImageFromImage:(id)arg1 forContentsScale:(double)arg2 ;
@end

