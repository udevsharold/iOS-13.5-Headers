/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)dealloc;
-(long long)count;
-(id)initWithOwner:(id)arg1 ;
-(void)removeAllTiles;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(id)tileForID:(SCD_Struct_TS122)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS122)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS122)arg1 ;
-(void)makeTilesPerformSelector:(SEL)arg1 ;
@end

