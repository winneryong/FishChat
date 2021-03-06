//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase;

@interface WXGMigrationInfoDB : NSObject
{
    WCDataBase *m_db;
}

- (void).cxx_destruct;
- (id)p_getSessionLastTimeTableWithDeviceID:(id)arg1;
- (_Bool)hasMigrationWithDeviceID:(id)arg1 withSessionName:(id)arg2;
- (_Bool)hasMigrationWithDeviceID:(id)arg1;
- (unsigned int)getSessionLastTime:(id)arg1 withDeviceID:(id)arg2;
- (void)insertSession:(id)arg1 withLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (void)createSessionLastTimeTableWithDeviceID:(id)arg1;
- (void)closeDB;
- (void)dealloc;
- (id)init;

@end

