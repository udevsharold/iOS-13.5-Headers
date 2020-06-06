/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned _index;
	unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _uuidSet;

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned index;                        //@synthesize index=_index - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(BOOL)intersectsSet:(id)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(id)initWithUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(UUIDData<TSP::UUIDData>)anyUuid;
-(BOOL)p_addUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(BOOL)p_removeUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)p_addUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)p_addUUIDsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)p_removeUUIDsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)initWithUUIDSet:(id)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)uuidsAsVector;
-(BOOL)isAllInvalid;
-(id)expandedSetWithUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)reducedSetMinusUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)expandedSetWithUuids:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)reducedSetMinusUuids:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)expandedSetWithUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)reducedSetMinusUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)p_removeUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)initWithUUIDVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)foreachUuid:(/*^block*/id)arg1 ;
-(BOOL)containsUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
@end

