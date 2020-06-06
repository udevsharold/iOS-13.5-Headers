/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(unsigned char)sceneID;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(unsigned char)sceneState;

@end

