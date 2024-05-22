// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaToolOptionEventFilter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaToolOptionEventFilter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RToolOptionEventFilter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RToolOptionEventFilter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RToolOptionEventFilter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RToolOptionEventFilter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaToolOptionEventFilter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RToolOptionEventFilter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RToolOptionEventFilter
                    * cppResult =
                    new
                    RToolOptionEventFilter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                ) /* type: QObject * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RToolOptionEventFilter
                    * cppResult =
                    new
                    RToolOptionEventFilter
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RToolOptionEventFilter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaToolOptionEventFilter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RToolOptionEventFilter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaToolOptionEventFilter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RToolOptionEventFilter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaToolOptionEventFilter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue REcmaToolOptionEventFilter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RToolOptionEventFilter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RToolOptionEventFilter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaToolOptionEventFilter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RToolOptionEventFilter* self = getSelf("RToolOptionEventFilter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RToolOptionEventFilter* REcmaToolOptionEventFilter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RToolOptionEventFilter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RToolOptionEventFilter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RToolOptionEventFilter.%1(): "
                        "This object is not a RToolOptionEventFilter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RToolOptionEventFilter* REcmaToolOptionEventFilter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RToolOptionEventFilter* selfBase = getSelf(fName, context);
                RToolOptionEventFilter* self = dynamic_cast<RToolOptionEventFilter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RToolOptionEventFilter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RToolOptionEventFilter.%1(): "
                    "This object is not a RToolOptionEventFilter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RToolOptionEventFilter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RToolOptionEventFilter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RToolOptionEventFilter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    