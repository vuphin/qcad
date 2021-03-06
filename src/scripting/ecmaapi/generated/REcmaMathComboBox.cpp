// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaMathComboBox.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaMathComboBox::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RMathComboBox*) 0)));
        protoCreated = true;
    }

    
        // primary base class QComboBox:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QComboBox*>());

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
    
        // conversion for base class QComboBox
        REcmaHelper::registerFunction(&engine, proto, getQComboBox, "getQComboBox");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, slotTextChanged, "slotTextChanged");
            
            REcmaHelper::registerFunction(&engine, proto, slotValueChanged, "slotValueChanged");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RMathComboBox*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RMathComboBox",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaMathComboBox::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMathComboBox(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RMathComboBox
                    * cppResult =
                    new
                    RMathComboBox
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMathComboBox(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaMathComboBox::getQComboBox(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QComboBox* cppResult =
                    qscriptvalue_cast<RMathComboBox*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaMathComboBox::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RMathComboBox"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaMathComboBox::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QComboBox");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaMathComboBox::slotTextChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathComboBox::slotTextChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathComboBox::slotTextChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathComboBox* self = 
                        getSelf("slotTextChanged", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->slotTextChanged(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathComboBox.slotTextChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathComboBox::slotTextChanged", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathComboBox::slotValueChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathComboBox::slotValueChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathComboBox::slotValueChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathComboBox* self = 
                        getSelf("slotValueChanged", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->slotValueChanged(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathComboBox.slotValueChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathComboBox::slotValueChanged", context, engine);
            return result;
        }
         QScriptValue REcmaMathComboBox::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RMathComboBox* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RMathComboBox(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaMathComboBox::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RMathComboBox* self = getSelf("RMathComboBox", context);
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
    RMathComboBox* REcmaMathComboBox::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMathComboBox* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMathComboBox >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMathComboBox.%1(): "
                        "This object is not a RMathComboBox").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RMathComboBox* REcmaMathComboBox::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMathComboBox* selfBase = getSelf(fName, context);
                RMathComboBox* self = dynamic_cast<RMathComboBox*>(selfBase);
                //return REcmaHelper::scriptValueTo<RMathComboBox >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMathComboBox.%1(): "
                    "This object is not a RMathComboBox").arg(fName),
                    context);
            }

            return self;
            


        }
        